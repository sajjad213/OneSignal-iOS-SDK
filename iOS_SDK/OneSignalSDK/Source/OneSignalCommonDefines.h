/**
 * Modified MIT License
 *
 * Copyright 2017 OneSignal
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * 1. The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * 2. All copies of substantial portions of the Software may only be used in connection
 * with services provided by OneSignal.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef OneSignalCommonDefines_h
#define OneSignalCommonDefines_h

// networking
#define API_VERSION @"api/v1/"
#define SERVER_URL @"https://onesignal.wallyapp.ir/"

// NSUserDefaults parameter names
#define EMAIL_AUTH_CODE @"GT_EMAIL_AUTH_CODE"
#define SUBSCRIPTION_SETTING @"ONESIGNAL_SUBSCRIPTION_LAST"
#define EMAIL_USERID @"GT_EMAIL_PLAYER_ID"
#define USERID @"GT_PLAYER_ID"
#define USERID_LAST @"GT_PLAYER_ID_LAST"
#define DEVICE_TOKEN @"GT_DEVICE_TOKEN"
#define SUBSCRIPTION @"ONESIGNAL_SUBSCRIPTION"
#define PUSH_TOKEN @"GT_DEVICE_TOKEN_LAST"
#define ACCEPTED_PERMISSION @"ONESIGNAL_PERMISSION_ACCEPTED_LAST"
#define REQUIRE_EMAIL_AUTH @"GT_REQUIRE_EMAIL_AUTH"
#define EMAIL_ADDRESS @"EMAIL_ADDRESS"
#define PROMPT_BEFORE_OPENING_PUSH_URL @"PROMPT_BEFORE_OPENING_PUSH_URL"
#define DEPRECATED_SELECTORS @[@"application:didReceiveLocalNotification:", @"application:handleActionWithIdentifier:forLocalNotification:completionHandler:", @"application:handleActionWithIdentifier:forLocalNotification:withResponseInfo:completionHandler:"]

// GDPR Privacy Consent
#define GDPR_CONSENT_GRANTED @"GDPR_CONSENT_GRANTED"
#define ONESIGNAL_REQUIRE_PRIVACY_CONSENT @"OneSignal_require_privacy_consent"

// Badge handling
#define ONESIGNAL_DISABLE_BADGE_CLEARING @"OneSignal_disable_badge_clearing"
#define ONESIGNAL_APP_GROUP_NAME_KEY @"OneSignal_app_groups_key"
#define ONESIGNAL_BADGE_KEY @"onesignalBadgeCount"

// Firebase
#define ONESIGNAL_FB_ENABLE_FIREBASE @"OS_ENABLE_FIREBASE_ANALYTICS"
#define ONESIGNAL_FB_LAST_TIME_RECEIVED @"OS_LAST_RECIEVED_TIME"
#define ONESIGNAL_FB_LAST_GAF_CAMPAIGN_RECEIVED @"OS_LAST_RECIEVED_GAF_CAMPAIGN"
#define ONESIGNAL_FB_LAST_NOTIFICATION_ID_RECEIVED @"OS_LAST_RECIEVED_NOTIFICATION_ID"

#define ONESIGNAL_SUPPORTED_ATTACHMENT_TYPES @[@"aiff", @"wav", @"mp3", @"mp4", @"jpg", @"jpeg", @"png", @"gif", @"mpeg", @"mpg", @"avi", @"m4a", @"m4v"]

// Notification types
#define NOTIFICATION_TYPE_NONE 0
#define NOTIFICATION_TYPE_BADGE 1
#define NOTIFICATION_TYPE_SOUND 2
#define NOTIFICATION_TYPE_ALERT 4
#define NOTIFICATION_TYPE_ALL 7

#define ERROR_PUSH_CAPABLILITY_DISABLED    -13
#define ERROR_PUSH_DELEGATE_NEVER_FIRED    -14
#define ERROR_PUSH_SIMULATOR_NOT_SUPPORTED -15
#define ERROR_PUSH_UNKNOWN_APNS_ERROR      -16
#define ERROR_PUSH_OTHER_3000_ERROR        -17
#define ERROR_PUSH_NEVER_PROMPTED          -18
#define ERROR_PUSH_PROMPT_NEVER_ANSWERED   -19

// Registration delay
#define REGISTRATION_DELAY_SECONDS 30.0

// How long the SDK will wait for APNS to respond
// before registering the user anyways
#define APNS_TIMEOUT 25.0

#endif /* OneSignalCommonDefines_h */
