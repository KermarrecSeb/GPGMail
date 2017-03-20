/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import <Message/MessageStore.h>

#import "POP3ConnectionDelegate-Protocol.h"
#import "RouterStore-Protocol.h"

@class NSMutableSet;

@interface POP3FetchStore : MessageStore <POP3ConnectionDelegate, RouterStore>
{
    BOOL _lastConnectionFailed;
    BOOL _routerCancelled;
    NSMutableSet *_skippedMessageIds;
    struct __CFArray *_messageNumbersToDelete;
}

- (id)initWithPOPAccount:(id)arg1;
- (id)init;
- (id)initWithMailboxUid:(id)arg1 readOnly:(BOOL)arg2;
- (void)dealloc;
- (void)deleteMessages:(id)arg1;
- (void)fetchSynchronously;
- (BOOL)_createDirectoryIfNeeded;
- (id)_authenticatedConnection;
- (void)_backgroundFetchFailed:(id)arg1;
- (BOOL)_firstAndLast:(unsigned long long)arg1 onConnection:(id)arg2 alreadySeen:(id)arg3;
- (id)_messageIDForNumber:(unsigned long long)arg1 serverIdsByNumber:(struct __CFDictionary *)arg2 connection:(id)arg3;
- (BOOL)_shouldDeleteSeenMessage:(id)arg1 messageID:(id)arg2 deletionPolicy:(int)arg3 cutoffDate:(id)arg4 url:(id)arg5 inbox:(id)arg6;
- (void)_removeDeletedMessagesWithNumbers:(struct __CFArray *)arg1 fromSeenMessageManager:(id)arg2 connection:(id)arg3;
- (void)_deleteMessagesMarkedForDeletionUsingManager:(id)arg1;
- (int)_closeConnection:(id)arg1;
- (void)_addMessageNumberToDelete:(unsigned long long)arg1;
- (void)_clearMessageNumbersToDelete;
- (struct __CFArray *)_copyMessageNumbersToDelete;
- (id)mailboxUid;
- (BOOL)isOpened;
- (id)displayName;
- (id)_fetchHeaderDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2 allowPartial:(BOOL)arg3;
- (id)_fetchHeaderDataForMessage:(id)arg1 fetchIfNotAvailable:(BOOL)arg2;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3 allowPartial:(BOOL)arg4;
- (id)_fetchBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 fetchIfNotAvailable:(BOOL)arg3;
- (id)messageForMessageID:(id)arg1;
- (void)writeUpdatedMessageDataToDisk;
- (void)_setNeedsAutosave;
- (void)_cancelAutosave;
- (void)messageFlagsDidChange:(id)arg1 flags:(id)arg2;
- (BOOL)connectionShouldPrefetchMessages;
- (void)connection:(id)arg1 receivedNumberOfBytes:(unsigned long long)arg2;
- (long long)connection:(id)arg1 willRetrieveMessageNumber:(unsigned long long)arg2 header:(id)arg3 size:(unsigned long long)arg4;
- (void)connection:(id)arg1 didRetrieveData:(id)arg2 forMessageNumber:(unsigned long long)arg3;
- (void)cancel;
- (id)_defaultRouterDestination;
- (void)messagesWillBeRouted:(id)arg1;
- (void)messagesWereRouted:(id)arg1;
@property BOOL routerCancelled; // @synthesize routerCancelled=_routerCancelled;

@end
