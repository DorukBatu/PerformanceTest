Action()
{

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_url("l", 
		"URL=https://translate.googleapis.com/translate_a/l?client=chrome&hl=tr&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw&alpha=1", 
		"Resource=1", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t1.inf", 
		LAST);

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_url("www.google.com.tr", 
		"URL=https://www.google.com.tr/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/images/branding/googlelogo/1x/googlelogo_color_272x92dp.png", ENDITEM, 
		"Url=/xjs/_/js/k=xjs.s.tr.Mughjn34fj8.O/m=sx,c,sb,cdos,cr,elog,hsm,jsa,r,qsm,j,p,d,csi/am=gBGK9njBA5D_HwKCoVsIC9IGJg40/rt=j/d=1/t=zcms/rs=ACT90oGdxc9r-P9a-l6beJEUKsRH6UFm3A", ENDITEM, 
		"Url=/xjs/_/js/k=xjs.s.tr.Mughjn34fj8.O/m=aa,abd,async,dvl,foot,fpe,ipv6,lu,m,sf,spch,d3l,udlg/am=gBGK9njBA5D_HwKCoVsIC9IGJg40/exm=sx,c,sb,cdos,cr,elog,hsm,jsa,r,qsm,j,p,d,csi/rt=j/d=1/ed=1/t=zcms/rs=ACT90oGdxc9r-P9a-l6beJEUKsRH6UFm3A", ENDITEM, 
		"Url=/images/nav_logo242.png", ENDITEM, 
		LAST);

	web_add_cookie("TID=-JTXNX-; DOMAIN=sstats.adobe.com");

	web_add_cookie("AMCV_9E1005A551ED61CA0A490D45@AdobeOrg=T; DOMAIN=sstats.adobe.com");

	web_add_cookie("s_fid=59E5A595FE6378E5-2DAD2B3E8D13038A; DOMAIN=sstats.adobe.com");

	web_add_cookie("AMCV_9E1005A551ED61CA0A490D45%40AdobeOrg=1099438348%7CMCIDTS%7C17300%7CMCMID%7C53006549227925151751127029123490931863%7CMCAAMLH-1495290951%7C6%7CMCAAMB-1495367514%7CNRX38WO0n5BH8Th-nqAG_A%7CMCOPTOUT-1494769914s%7CNONE%7CMCAID%7C2C31B783853111AC-6000010F20003ABB%7CMCSYNCSOP%7C411-17307%7CvVersion%7C2.1.0; DOMAIN=sstats.adobe.com");

	web_add_cookie("s_pers=%20TID%3D-JTXNX-%7C1505054154442%3B%20cpn%3Dcreative.adobe.com%253ADownloadCenter%253ADownload-NotSignedIn%253Aindesign%7C1652452606328%3B%20s_fid%3D28AA416692EF824B-2ACC3972E37FDBFB%7C1557759394355%3B%20s_nr%3D1494687394362-Repeat%7C1526223394362%3B%20s_vs%3D1%7C1494764518416%3B; DOMAIN=sstats.adobe.com");

	web_add_cookie("s_vi=[CS]v1|2C31B783853114B9-6000010340006751[CE]; DOMAIN=sstats.adobe.com");

	web_custom_request("experimentstatus", 
		"URL=https://clients4.google.com/chrome-sync/experimentstatus", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/vnd.google.octet-stream-compressible", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\n\\x0Bgcm_channel", 
		EXTRARES, 
		"Url=https://sstats.adobe.com/b/ss/adbcreatepdfplugin.prod/1/JS-1.6/s02604216902830?AQB=1&ndh=1&pf=1&t=31%2F6%2F2017%2022%3A55%3A26%201%20-180&fid=4DAF56F96EF0D899-38CFEE22A3523EF3&ce=UTF-8&pageName=DCBrowserExt%3AShim%3AVersion%3AUnknown%3AOp&g=chrome-extension%3A%2F%2Fefaidnbmnnnibpcajpcglclefindmkaj%2F_generated_background_page.html&v1=15.1.0.6&v2=sideload&v3=prod&v4=not_set&s=1280x800&c=24&j=1.6&v=N&k=Y&bh=8&AQE=1", "Referer=", ENDITEM, 
		"Url=https://sstats.adobe.com/b/ss/adbcreatepdfplugin.prod/1/JS-1.6/s08554645593290?AQB=1&ndh=1&pf=1&t=31%2F6%2F2017%2022%3A55%3A28%201%20-180&fid=4DAF56F96EF0D899-38CFEE22A3523EF3&ce=UTF-8&pageName=DCBrowserExt%3AExtension%3AStartup%3AOp&g=chrome-extension%3A%2F%2Fefaidnbmnnnibpcajpcglclefindmkaj%2F_generated_background_page.html&v1=15.1.0.6&v2=sideload&v3=prod&v4=unknown&AQE=1", "Referer=", ENDITEM, 
		LAST);

	web_url("gen_204", 
		"URL=https://www.google.com.tr/gen_204?s=webhp&atyp=csi&ei=sYl_WcSpIoaUaP7RoYgM&imc=1&imn=1&imp=0&adh=&ima=0&ime=0&rt=xjsls.468,prt.574,iml.574,dcl.575,xjses.3270,xjsee.3506,xjs.3506,ol.4041,aft.574,wsrt.3462,cst.1771,dnst.0,rqst.829,rspt.426,sslt.1627,rqstt.2960,unt.745,cstt.1188,dit.4036&mem=ujhs.12,tjhs.16,jhsl.2190", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.google.com.tr/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://sstats.adobe.com/b/ss/adbcreatepdfplugin.prod/1/JS-1.6/s08433154537899?AQB=1&ndh=1&pf=1&t=31%2F6%2F2017%2022%3A55%3A28%201%20-180&fid=4DAF56F96EF0D899-38CFEE22A3523EF3&ce=UTF-8&pageName=DCBrowserExt%3AOS%3Awin%3AOp&g=chrome-extension%3A%2F%2Fefaidnbmnnnibpcajpcglclefindmkaj%2F_generated_background_page.html&v1=15.1.0.6&v2=sideload&v3=prod&v4=unknown&AQE=1", "Referer=", ENDITEM, 
		LAST);

	return 0;
}