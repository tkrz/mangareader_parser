/**
 * This file was auto-generated by the Titanium Module SDK helper for Android
 * Appcelerator Titanium Mobile
 * Copyright (c) 2009-2010 by Appcelerator, Inc. All Rights Reserved.
 * Licensed under the terms of the Apache Public License
 * Please see the LICENSE included with this distribution for details.
 *
 */
package pl.tkrz.mangareader.parser;

import org.jsoup.Jsoup;
import org.jsoup.helper.Validate;
import org.jsoup.nodes.Document;
import org.jsoup.nodes.Element;
import org.jsoup.select.Elements;

import org.appcelerator.kroll.KrollModule;
import org.appcelerator.kroll.annotations.Kroll;

import org.appcelerator.titanium.TiApplication;
import org.appcelerator.kroll.common.Log;
import org.appcelerator.kroll.common.TiConfig;

import org.json.JSONObject;
import org.json.JSONArray;
import org.json.JSONException;


@Kroll.module(name="MangareaderParser", id="pl.tkrz.mangareader.parser")
public class MangareaderParserModule extends KrollModule
{

	// Standard Debugging variables
	private static final String LCAT = "MangareaderParserModule";
	private static final boolean DBG = TiConfig.LOGD;

	// You can define constants with @Kroll.constant, for example:
	// @Kroll.constant public static final String EXTERNAL_NAME = value;

	public MangareaderParserModule()
	{
		super();
	}

	@Kroll.onAppCreate
	public static void onAppCreate(TiApplication app)
	{
		Log.d(LCAT, "inside onAppCreate");
		// put module init code that needs to run when the application is created
	}

	// Methods
	@Kroll.method
	public String example()
	{
		Log.d(LCAT, "example called");
		return "hello world";
	}
	
	@Kroll.method
	public String parseHtml(String html)
	{
		JSONArray list = new JSONArray();
		Document doc = Jsoup.parse(html);
		Element wrapper = doc.getElementById("wrapper_body");
		Elements links = wrapper.getElementsByTag("a");
		for (Element link : links) {
			String linkHref = link.attr("href");
			String linkText = link.text();
			if(linkHref == "") continue;
			else if(linkHref == "#") continue;
			else if(linkHref.indexOf("#") > -1) continue;
//			Log.i(LCAT, "Link: " + linkText + " - " + linkHref);
			JSONObject manga = new JSONObject();
			JSONObject properties = new JSONObject();
			try {
                manga.put("title", linkText);
                manga.put("url", linkHref);
                properties.put("properties", manga);

            } catch (JSONException e) {
                // TODO Auto-generated catch block
                e.printStackTrace();
            }
			list.put(properties);
		}
		return list.toString();
	}

	// Properties
	@Kroll.getProperty
	public String getExampleProp()
	{
		Log.d(LCAT, "get example property");
		return "hello world";
	}


	@Kroll.setProperty
	public void setExampleProp(String value) {
		Log.d(LCAT, "set example property: " + value);
	}

}

