//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class NSDate, NSMutableArray, NSOperationQueue, NSTimer, NSUserDefaults;

@interface AccountManager : NSObject
{
    NSMutableArray *_accountsBeingObserved;
    BOOL _automaticFetchingShouldBeDisabled;
    BOOL _dailyCleanupDisabled;
    BOOL _missedDailyCleanup;
    NSOperationQueue *_automaticFetchQueue;
    NSTimer *_fetchTimer;
    NSDate *_lastAutomaticFetchDate;
    NSDate *_lastAutomaticUserInteractionFetchDate;
    NSOperationQueue *_accountChangedQueue;
}

+ (id)keyPathsForValuesAffectingFetchFrequency;
+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)log;
@property(readonly, nonatomic) NSOperationQueue *accountChangedQueue; // @synthesize accountChangedQueue=_accountChangedQueue;
@property(nonatomic) BOOL missedDailyCleanup; // @synthesize missedDailyCleanup=_missedDailyCleanup;
@property(nonatomic) BOOL dailyCleanupDisabled; // @synthesize dailyCleanupDisabled=_dailyCleanupDisabled;
@property(retain, nonatomic) NSDate *lastAutomaticUserInteractionFetchDate; // @synthesize lastAutomaticUserInteractionFetchDate=_lastAutomaticUserInteractionFetchDate;
@property(retain, nonatomic) NSDate *lastAutomaticFetchDate; // @synthesize lastAutomaticFetchDate=_lastAutomaticFetchDate;
@property(retain, nonatomic) NSTimer *fetchTimer; // @synthesize fetchTimer=_fetchTimer;
@property(readonly, nonatomic) NSOperationQueue *automaticFetchQueue; // @synthesize automaticFetchQueue=_automaticFetchQueue;
@property(nonatomic) BOOL automaticFetchingShouldBeDisabled; // @synthesize automaticFetchingShouldBeDisabled=_automaticFetchingShouldBeDisabled;
//- (void).cxx_destruct;
- (void)_deliveryAccountConnectionOrAuthenticationPropertiesDidChange:(id)arg1;
- (void)_mailAccountConnectionOrAuthenticationPropertiesDidChange:(id)arg1;
- (void)_credentialsDidChange:(id)arg1;
- (void)_accountStoreDidChange:(id)arg1;
- (void)_mailAccountsChanged:(id)arg1;
- (void)_connectionError:(id)arg1 didChangeForAccount:(id)arg2;
- (void)_performDailyCleanup:(id)arg1;
- (void)enableDailyCleanupAndCleanupIfNecessary;
- (void)disableDailyCleanup;
- (void)_mailAccountNeedsChecking:(id)arg1;
- (void)_fetchForAllAccountsWithType:(long long)arg1;
- (void)fetchForAccount:(id)arg1 isAutomatic:(BOOL)arg2;
- (void)_performAutomaticFetch:(long long)arg1;
- (void)_startSynchronizationForNewAccount:(id)arg1;
- (void)initializeAutomaticFetchingAndPerformInitialFetch;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_fetchTimerFired:(id)arg1;
- (void)_adjustFetchActivityAndReset:(id)arg1;
- (void)disableAutomaticFetching;
- (void)enableAutomaticFetchingAndFetchIfNecessary;
@property(nonatomic) long long fetchFrequency;
@property(readonly, nonatomic) NSUserDefaults *userDefaults;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;

@end
