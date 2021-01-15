#encoding UTF-8
<script type="text/javascript">showChart("about");</script>
<div class="entry-content about-outer" itemprop="text">

    <div class="row" style="margin-top:15px;">

        <div class="col-sm-4">
            <img src="/images/station.jpg">
    <p> </p>
     <p>Données transmises vers les centres météorologiques :</p>
    <ul>
        <li><a href="https://www.infoclimat.fr/observations-meteo/temps-reel/auffargis/000SC.html?graphiques" target="_blank">InfoClimat</a></li>
        <li><a href="http://www.meteociel.fr/temps-reel/obs_villes.php?code2=355" target="_blank">Meteociel</a></li>
        <li><a href="https://www.wunderground.com/weather/IAUFFA1" target="_blank">Weather Underground</a></li>
        <li><a href="https://www.pwsweather.com/station/pws/auffargis1" target="_blank">Personal Weather Station</a></li>
        <li><a href="https://app.weathercloud.net/d8571346530#current" target="_blank">Weathercloud</a></li>
        <li><a href="http://www.findu.com/cgi-bin/panel.cgi?call=FW8134&units=metric&xsize=1000&bgcolor=0,0,0&rcolor=0,255,0&acolor=255,0,255&fcolor=255,0,0&led=1&notext=1&nowindchill=1" target="_blank">Citizen Weather Observer Program</a></li>
        <li><a href="https://www.awekas.at/fr/instrument.php?id=17214" target="_blank">Système automatique de cartes AWEKAS</a></li>
    </ul>
    <p> </p>
     <p>Configuration :</p>
    <ul>
        <li>Interface station : $station.hardware</li>
        <li>WeeWX version : $station.version</li>
        <li>Belchertown Skin Version : $belchertown_version</li>
		<li>Date d'installation : Juin 2020</li>
    </ul>
       </div>

        <div class="col-sm-8" style="padding-top:10px;">
    <p>Ce site web est mis à jour en temps réel (toutes les 2,5 secondes) grâce à la station météo connectée <a href="https://www.davisinstruments.com/vantage-vue/" target="_blank">Davis Vantage Vue</a> située à Auffargis dans les Yvelines.</p>
    <ul><ul>
		<img src="/images/vantage_vue.png">
    </ul></ul>
	<p>Cette station est intégrée au réseau <a href="https://www.infoclimat.fr/observations-meteo/temps-reel/auffargis/000SC.html" target="_blank">StatIC</a> ainsi qu'aux bases <a href="https://www.infoclimat.fr/climatologie/annee/2020/auffargis/valeurs/000SC.html" target="_blank">climatologique et pluviométrique</a> d'InfoClimat. Lorsque certaines conditions sont remplies, les données sont automatiquement reportées sur <a href="http://meteoalerte.com/france/index.html?area=idf" target="_blank">MétéoAlerte.</a><p>
    <p>Elle fournit les informations suivantes :
    <ul>
        <li>Température, point de rosée</li>
        <li>Vitesse et direction du vent</li>
        <li>Pluie, humidité</li>
        <li>Pression atmosphérique</li>
    </ul>
    </p>
    <p>Logiciels utilisés :</p>
    <ul>
        <li><a href="http://www.weewx.com/" target="_blank">Weewx</a> Logiciel de récupération des données</li>
        <li><a href="http://www.highcharts.com/" target="_blank">HighCharts</a> Pour les graphiques</li>
        <li><a href="https://github.com/poblabs/weewx-belchertown" target="_blank">Belchertown skin</a> Thème créé pour s'intégrer avec Weewx</li>
        <li><a href="https://obrienlabs.net/go/mqttbroker" target="_blank">MQTT</a> Pour les données instantanées disponibles sur la page d'accueil</li>
    </ul>
    <p>Remerciements :</p>
    <ul>
		<li>à <a href="https://github.com/didjcodt" target="_blank">Didjcodt</a> pour son aide au développement de ce site</li>
        <li>à Pat O'Brien pour le thème <a href="https://github.com/poblabs/weewx-belchertown" target="_blank">Belchertown</a></li>
        <li>à Tom Keffer pour le logiciel Open Source <a href="https://github.com/weewx/weewx" target="_blank">WeeWX</a></li>
        <li>à <a href="https://www.infoclimat.fr/" target="_blank">InfoClimat</a> et à <a href="https://www.aerisweather.com/" target="_blank">AerisWeather</a> pour les prévisions</li>
        <li>au réseau <a href="https://www.blitzortung.org/fr/live_lightning_maps.php" target="_blank">Blitzortung</a> pour la détection de foudre en temps réel </li>
    </ul>
</div>
