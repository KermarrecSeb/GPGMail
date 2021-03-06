/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "MCActivityTarget.h"

@class MCActivityMonitor, NSMapTable, NSMutableArray, NSString;

@interface MFLibraryThread : NSObject <MCActivityTarget>
{
    NSMutableArray *_requests;
    MCActivityMonitor *_monitor;
    NSMapTable *_storeReqCounts;
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void).cxx_destruct;
- (BOOL)isAddingMessagesToStore:(id)arg1;
- (id)messagesBeingAddedToStore:(id)arg1;
- (void)addMessages:(id)arg1 toStore:(id)arg2;
- (void)_runThread;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

