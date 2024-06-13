// Copyright 2015 The Chromium Authors
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file defines all the public base::FeatureList features for the content
// module.

#ifndef CONTENT_PUBLIC_COMMON_CONTENT_FEATURES_H_
#define CONTENT_PUBLIC_COMMON_CONTENT_FEATURES_H_

#include <string>

#include "base/feature_list.h"
#include "base/metrics/field_trial_params.h"
#include "base/time/time.h"
#include "build/build_config.h"
#include "build/chromeos_buildflags.h"
#include "content/common/content_export.h"
#include "content/public/common/dips_utils.h"

namespace features {

// BEFORE MODIFYING THIS FILE: If your feature is only used inside content/, add
// your feature in `content/common/features.h` instead.

// All features in alphabetical order. The features should be documented
// alongside the definition of their values in the .cc file.
CONTENT_EXPORT BASE_DECLARE_FEATURE(kAudioServiceLaunchOnStartup);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kAudioServiceOutOfProcess);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kAudioServiceSandbox);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kBackgroundFetch);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kBackForwardCache);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kBackForwardCacheEntryTimeout);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kBackForwardCacheMemoryControls);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kBackForwardCacheMediaSessionService);
CONTENT_EXPORT BASE_DECLARE_FEATURE(
    kBlockCrossOriginInitiatedAboutSrcdocNavigations);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kBlockInsecurePrivateNetworkRequests);
CONTENT_EXPORT BASE_DECLARE_FEATURE(
    kBlockInsecurePrivateNetworkRequestsFromPrivate);
CONTENT_EXPORT BASE_DECLARE_FEATURE(
    kBlockInsecurePrivateNetworkRequestsDeprecationTrial);
CONTENT_EXPORT BASE_DECLARE_FEATURE(
    kBrokerFileOperationsOnDiskCacheInNetworkService);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kBrowserVerifiedUserActivationMouse);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kCacheControlNoStoreEnterBackForwardCache);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kCapturedSurfaceControlStickyPermissions);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kCapturedSurfaceControlKillswitch);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kCdmStorageDatabase);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kCdmStorageDatabaseMigration);
CONTENT_EXPORT BASE_DECLARE_FEATURE(
    kClearCrossSiteCrossBrowsingContextGroupWindowName);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kCompositeBGColorAnimation);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kCookieDeprecationFacilitatedTesting);
CONTENT_EXPORT extern const base::FeatureParam<bool>
    kCookieDeprecationFacilitatedTestingEnableOTRProfiles;
CONTENT_EXPORT extern const base::FeatureParam<std::string>
    kCookieDeprecationLabel;
CONTENT_EXPORT extern const base::FeatureParam<bool>
    kCookieDeprecationTestingDisableAdsAPIs;
CONTENT_EXPORT extern const char kCookieDeprecationLabelName[];
CONTENT_EXPORT extern const char kCookieDeprecationTestingDisableAdsAPIsName[];
CONTENT_EXPORT BASE_DECLARE_FEATURE(kCooperativeScheduling);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kCrashReporting);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kDigitalGoodsApi);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kDIPS);
CONTENT_EXPORT extern const base::FeatureParam<bool>
    kDIPSPersistedDatabaseEnabled;
CONTENT_EXPORT extern const base::FeatureParam<bool> kDIPSDeletionEnabled;
CONTENT_EXPORT extern const base::FeatureParam<base::TimeDelta>
    kDIPSGracePeriod;
CONTENT_EXPORT extern const base::FeatureParam<base::TimeDelta> kDIPSTimerDelay;
CONTENT_EXPORT extern const base::FeatureParam<base::TimeDelta>
    kDIPSInteractionTtl;
CONTENT_EXPORT extern const base::FeatureParam<content::DIPSTriggeringAction>
    kDIPSTriggeringAction;
CONTENT_EXPORT extern const base::FeatureParam<base::TimeDelta>
    kDIPSClientBounceDetectionTimeout;
CONTENT_EXPORT BASE_DECLARE_FEATURE(kDIPSPreservePSData);
CONTENT_EXPORT BASE_DECLARE_FEATURE(
    kDisconnectExtensionMessagePortWhenPageEntersBFCache);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kDrawCutoutEdgeToEdge);
CONTENT_EXPORT BASE_DECLARE_FEATURE(
    kEarlyDocumentSwapForBackForwardTransitions);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kEarlyEstablishGpuChannel);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kEnableCanvas2DLayers);
CONTENT_EXPORT BASE_DECLARE_FEATURE(
    kEnableMachineLearningModelLoaderWebPlatformApi);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kEnableServiceWorkersForChromeScheme);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kEnableServiceWorkersForChromeUntrusted);
#if BUILDFLAG(IS_WIN)
CONTENT_EXPORT BASE_DECLARE_FEATURE(kExpandedPrefetchRange);
#endif
CONTENT_EXPORT BASE_DECLARE_FEATURE(kFedCm);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kFedCmAuthz);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kFedCmButtonMode);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kFedCmIdPRegistration);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kFedCmIdpSigninStatusEnabled);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kFedCmMetricsEndpoint);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kFedCmMultipleIdentityProviders);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kFedCmSelectiveDisclosure);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kFedCmUseOtherAccount);
// Allows Storage Access API requests to resolve due to FedCM connections.
CONTENT_EXPORT BASE_DECLARE_FEATURE(kFedCmWithStorageAccessAPI);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kFedCmWithoutWellKnownEnforcement);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kFencedFramesEnforceFocus);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kWebIdentityDigitalCredentials);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kFractionalScrollOffsets);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kGreaseUACH);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kInstalledApp);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kInstalledAppProvider);
// LINT.IfChange
CONTENT_EXPORT BASE_DECLARE_FEATURE(kIsolatedWebApps);
// LINT.ThenChange(//PRESUBMIT.py)
CONTENT_EXPORT BASE_DECLARE_FEATURE(kAutomaticFullscreenContentSetting);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kIsolateFencedFrames);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kIsolateOrigins);
CONTENT_EXPORT extern const char kIsolateOriginsFieldTrialParamName[];
CONTENT_EXPORT BASE_DECLARE_FEATURE(kJavaScriptExperimentalSharedMemory);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kLazyInitializeMediaControls);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kLegacyTechReportEnableCookieIssueReports);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kLegacyWindowsDWriteFontFallback);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kLogJsConsoleMessages);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kLowerPAMemoryLimitForNonMainRenderers);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kMainThreadCompositingPriority);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kMBIMode);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kWebRtcHWDecoding);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kWebRtcHWEncoding);

enum class MBIMode {
  // In this mode, the AgentSchedulingGroup will use the process-wide legacy IPC
  // channel for communication with the renderer process and to associate its
  // interfaces with. AgentSchedulingGroup will effectively be a pass-through,
  // enabling legacy IPC and mojo behavior.
  kLegacy,

  // In this mode, each AgentSchedulingGroup will have its own legacy IPC
  // channel for communication with the renderer process and to associate its
  // interfaces with. Communication over that channel will not be ordered with
  // respect to the process-global legacy IPC channel. There will only be a
  // single AgentSchedulingGroup per RenderProcessHost.
  kEnabledPerRenderProcessHost,

  // This is just like the above state, however there will be a single
  // AgentSchedulingGroup per SiteInstance, and therefore potentially multiple
  // AgentSchedulingGroups per RenderProcessHost. Ordering between the
  // AgentSchedulingGroups in the same render process is not preserved.
  kEnabledPerSiteInstance,
};
CONTENT_EXPORT extern const base::FeatureParam<MBIMode> kMBIModeParam;
CONTENT_EXPORT BASE_DECLARE_FEATURE(kNavigationNetworkResponseQueue);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kNetworkQualityEstimatorWebHoldback);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kNetworkServiceInProcess);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kNotificationContentImage);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kNotificationTriggers);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kNoStatePrefetchHoldback);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kOriginIsolationHeader);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kOverscrollHistoryNavigation);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kPeriodicBackgroundSync);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kFeaturePolicyHeader);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kPepperCrossOriginRedirectRestriction);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kPermissionElement);
CONTENT_EXPORT extern const base::FeatureParam<bool>
    kPermissionElementDialogPositioning;
CONTENT_EXPORT BASE_DECLARE_FEATURE(kPersistentOriginTrials);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kPrefetchNewLimits);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kPrefetchRedirects);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kPrivacySandboxAdsAPIsOverride);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kPrivateNetworkAccessForNavigations);
CONTENT_EXPORT BASE_DECLARE_FEATURE(
    kPrivateNetworkAccessForNavigationsWarningOnly);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kPrivateNetworkAccessForWorkers);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kPrivateNetworkAccessForWorkersWarningOnly);
CONTENT_EXPORT BASE_DECLARE_FEATURE(
    kPrivateNetworkAccessRespectPreflightResults);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kPrivateNetworkAccessSendPreflights);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kOriginKeyedProcessesByDefault);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kPushSubscriptionChangeEvent);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kQueueNavigationsWhileWaitingForCommit);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kReduceSubresourceResponseStartedIPC);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kRenderDocument);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kRenderDocumentCompositorReuse);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kRetryGetVideoCaptureDeviceInfos);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kProcessPerSiteUpToMainFrameThreshold);
CONTENT_EXPORT extern const base::FeatureParam<int>
    kProcessPerSiteMainFrameThreshold;
CONTENT_EXPORT extern const base::FeatureParam<bool>
    kProcessPerSiteMainFrameAllowIPAndLocalhost;
CONTENT_EXPORT extern const base::FeatureParam<bool>
    kProcessPerSiteMainFrameAllowDevToolsAttached;
CONTENT_EXPORT BASE_DECLARE_FEATURE(kRunVideoCaptureServiceInBrowserProcess);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kSchedQoSOnResourcedForChrome);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kSecurePaymentConfirmation);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kSecurePaymentConfirmationDebug);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kServiceWorkerPaymentApps);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kSharedArrayBuffer);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kSharedArrayBufferOnDesktop);
CONTENT_EXPORT BASE_DECLARE_FEATURE(
    kShouldAllowFirstPartyStorageKeyOverrideFromEmbedder);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kSignedHTTPExchange);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kSiteInstanceGroupsForDataUrls);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kSiteIsolationForCrossOriginOpenerPolicy);
CONTENT_EXPORT extern const base::FeatureParam<bool>
    kSiteIsolationForCrossOriginOpenerPolicyShouldPersistParam;
CONTENT_EXPORT extern const base::FeatureParam<int>
    kSiteIsolationForCrossOriginOpenerPolicyMaxSitesParam;
CONTENT_EXPORT extern const base::FeatureParam<base::TimeDelta>
    kSiteIsolationForCrossOriginOpenerPolicyExpirationTimeoutParam;
CONTENT_EXPORT BASE_DECLARE_FEATURE(kDisableProcessReuse);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kServiceWorkerStaticRouter);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kUserMediaCaptureOnFocus);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kWebLockScreenApi);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kWebOTP);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kSpareRendererForSitePerProcess);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kStrictOriginIsolation);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kSuppressDifferentOriginSubframeJSDialogs);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kSurfaceSyncFullscreenKillswitch);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kSyntheticPointerActions);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kTouchDragAndContextMenu);
#if BUILDFLAG(IS_ANDROID)
CONTENT_EXPORT extern const base::FeatureParam<int>
    kTouchDragMovementThresholdDip;
#endif
CONTENT_EXPORT BASE_DECLARE_FEATURE(kUnrestrictedSharedArrayBuffer);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kUserActivationSameOriginVisibility);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kVerifyDidCommitParams);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kV8VmFuture);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kWebAppSystemMediaControlsWin);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kWebAssemblyBaseline);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kEnableExperimentalWebAssemblyJSPI);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kWebAssemblyLazyCompilation);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kWebAssemblyTiering);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kWebAssemblyTrapHandler);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kWebBluetooth);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kWebBluetoothNewPermissionsBackend);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kWebMidi);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kWebOtpBackendAuto);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kWebPayments);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kWebUICodeCache);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kWebUsb);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kWebXr);

#if BUILDFLAG(IS_ANDROID)
CONTENT_EXPORT BASE_DECLARE_FEATURE(kAccessibilityIncludeLongClickAction);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kAccessibilityPageZoom);
CONTENT_EXPORT extern const base::FeatureParam<bool>
    kAccessibilityPageZoomOSLevelAdjustment;
CONTENT_EXPORT BASE_DECLARE_FEATURE(kAccessibilityPageZoomEnhancements);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kAccessibilityUnifiedSnapshots);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kAndroidOpenPdfInline);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kGinJavaBridgeMojo);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kReduceGpuPriorityOnBackground);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kMouseAndTrackpadDropdownMenu);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kRequestDesktopSiteWindowSetting);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kSelectionMenuItemModification);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kSmartZoom);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kUserMediaScreenCapturing);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kWebNfc);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kWebViewSuppressTapDuringFling);
#endif  // BUILDFLAG(IS_ANDROID)

#if BUILDFLAG(IS_CHROMEOS)
CONTENT_EXPORT BASE_DECLARE_FEATURE(kGateNV12GMBVideoFramesOnHWSupport);
#endif

#if BUILDFLAG(IS_MAC)
CONTENT_EXPORT BASE_DECLARE_FEATURE(kMacAllowBackgroundingRenderProcesses);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kMacImeLiveConversionFix);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kMacSyscallSandbox);
CONTENT_EXPORT BASE_DECLARE_FEATURE(kSonomaAccessibilityActivationRefinements);
#endif  // BUILDFLAG(IS_MAC)

#if defined(WEBRTC_USE_PIPEWIRE)
CONTENT_EXPORT BASE_DECLARE_FEATURE(kWebRtcPipeWireCapturer);
#endif  // defined(WEBRTC_USE_PIPEWIRE)

// DON'T ADD RANDOM STUFF HERE. Put it in the main section above in
// alphabetical order, or in one of the ifdefs (also in order in each section).

CONTENT_EXPORT bool IsVideoCaptureServiceEnabledForOutOfProcess();
CONTENT_EXPORT bool IsVideoCaptureServiceEnabledForBrowserProcess();

}  // namespace features

#endif  // CONTENT_PUBLIC_COMMON_CONTENT_FEATURES_H_
