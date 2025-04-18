--- chrome/browser/enterprise/connectors/reporting/realtime_reporting_client.cc.orig	2024-10-16 21:30:58 UTC
+++ chrome/browser/enterprise/connectors/reporting/realtime_reporting_client.cc
@@ -59,7 +59,7 @@
 #include "base/strings/utf_string_conversions.h"
 #endif
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 #include "chrome/browser/enterprise/signals/signals_aggregator_factory.h"
 #include "chrome/browser/enterprise/signin/enterprise_signin_prefs.h"
 #include "components/device_signals/core/browser/signals_aggregator.h"
@@ -144,7 +144,7 @@ void UploadSecurityEventReport(base::Value::Dict event
       std::move(report), std::move(upload_callback));
 }
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 void PopulateSignals(base::Value::Dict event,
                      policy::CloudPolicyClient* client,
                      std::string name,
@@ -421,7 +421,7 @@ void RealtimeReportingClient::ReportPastEvent(const st
                            /*include_profile_user_name=*/false);
 }
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
 
 void AddCrowdstrikeSignalsToEvent(
     base::Value::Dict& event,
@@ -480,7 +480,7 @@ void RealtimeReportingClient::ReportEventWithTimestamp
   if (include_profile_user_name) {
     event.Set(kKeyProfileUserName, GetProfileUserName());
   }
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   Profile* profile = Profile::FromBrowserContext(context_);
   device_signals::SignalsAggregator* signals_aggregator =
       enterprise_signals::SignalsAggregatorFactory::GetForProfile(profile);
@@ -504,7 +504,7 @@ std::string RealtimeReportingClient::GetProfileUserNam
   std::string username =
       identity_manager_ ? GetProfileEmail(identity_manager_) : std::string();
 
-#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_WIN) || BUILDFLAG(IS_MAC) || BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   if (username.empty()) {
     username = Profile::FromBrowserContext(context_)->GetPrefs()->GetString(
         enterprise_signin::prefs::kProfileUserEmail);
