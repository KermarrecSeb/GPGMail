//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ABPerson.h"

@interface ABPerson (MailCoreAdditions)
+ (id)diacriticInsensitiveSearchElementForProperty:(id)arg1 label:(id)arg2 key:(id)arg3 value:(id)arg4 comparison:(long long)arg5;	// IMP=0x0000000000002ac4
- (BOOL)isGroup;	// IMP=0x0000000000002abc
- (id)compoundNameAndEmailForGroupMembership:(id)arg1;	// IMP=0x000000000000295a
@property(readonly, nonatomic) BOOL isMe;
- (BOOL)hasEmailAddress:(id)arg1;	// IMP=0x000000000000276f
@end
