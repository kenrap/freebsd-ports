--- chrome/browser/extensions/api/settings_private/prefs_util.cc.orig	2024-08-27 06:28:16 UTC
+++ chrome/browser/extensions/api/settings_private/prefs_util.cc
@@ -205,7 +205,7 @@ const PrefsUtil::TypedPrefMap& PrefsUtil::GetAllowlist
   (*s_allowlist)[tab_groups::prefs::kAutoPinNewTabGroups] =
       settings_api::PrefType::kBoolean;
 
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   (*s_allowlist)[::prefs::kUseCustomChromeFrame] =
       settings_api::PrefType::kBoolean;
 #endif
@@ -217,7 +217,7 @@ const PrefsUtil::TypedPrefMap& PrefsUtil::GetAllowlist
   (*s_allowlist)[::prefs::kCurrentThemeID] = settings_api::PrefType::kString;
   (*s_allowlist)[::prefs::kPinnedActions] = settings_api::PrefType::kList;
   (*s_allowlist)[::prefs::kPolicyThemeColor] = settings_api::PrefType::kNumber;
-#if BUILDFLAG(IS_LINUX)
+#if BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   (*s_allowlist)[::prefs::kSystemTheme] = settings_api::PrefType::kNumber;
 #endif
   (*s_allowlist)[::prefs::kHomePage] = settings_api::PrefType::kUrl;
