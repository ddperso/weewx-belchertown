(function (window, document, undefined) {

	document.addEventListener('DOMContentLoaded', initialize);

	function initialize() {
		var container = document.getElementById('av-skymap');
		container.style.overflow = 'hidden';
		container.innerHTML = getHTML();
	}

	function getHTML() {
//		var params = getValidatedParameters();
		
		const DEFAULT_LON = 0.0;
		const DEFAULT_LAT = 0.0;
		const DEFAULT_DECO = 16399;
		const DEFAULT_LANG = 'en';
		const LANGS = ['de', 'en', 'es', 'fr', 'is', 'nl', 'pt'];
		const DEFAULT_SIZE = 600;
		const MIN_SIZE = 500;
		const MAX_SIZE = 1000;

		var p = avSkymapProperties;   // from global variable
		var lon  = (p.location.lon && !isNaN(p.location.lon)) ? p.location.lon : DEFAULT_LON;
		var lat  = (p.location.lat && !isNaN(p.location.lat)) ? p.location.lat : DEFAULT_LAT;
		var deco = (p.deco && !isNaN(p.deco)) ? p.deco : DEFAULT_DECO;
		var lang = (p.lang && LANGS.includes(p.lang)) ? p.lang : DEFAULT_LANG;
		var size = (p.size && !isNaN(p.size)) ? p.size : DEFAULT_SIZE;
		size = Math.min(MAX_SIZE, Math.max(MIN_SIZE, size));

		const TEXTFIELD_HEIGHT = 90;
		var width  = size;
		var height = size + TEXTFIELD_HEIGHT; 

		var queryString = 'lon=' + lon.toFixed(3);
		queryString += '&lat='   + lat.toFixed(3);
		queryString += '&deco='  + deco;
		queryString += '&lang='  + lang;
		queryString += '&size='  + size;
		if (p.location.name)
			queryString += '&name=' + encodeURIComponent(p.location.name);
		if (p.location.tz)
			queryString += '&tz=' + encodeURIComponent(p.location.tz);
		if (p.time && !isNaN(p.time))
			queryString += '&time=' + parseInt(p.time);

		var url = 'https://astroviewer.net/av/widgets/skymap-av4-widget.php?' + queryString;

		var x = '';
		x += '<iframe id="skymap-iframe" src="' + url + '" width="' + width + '" height="' + height + '" sandbox="allow-scripts allow-popups" scrolling="no" style="overflow:hidden; border: 1px solid #ccc;"></iframe>';
		return x;
	}

}) (window, document);
