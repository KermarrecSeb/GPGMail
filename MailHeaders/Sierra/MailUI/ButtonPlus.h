//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButton.h"

@class NSCursor, NSImage;

@interface ButtonPlus : NSButton
{
    NSImage *_imageForNonMainWindow;	// 176 = 0xb0
    BOOL _ignoresFirstMouse;	// 184 = 0xb8
    BOOL _superviewIsFocusRingClipAncestor;	// 185 = 0xb9
    NSCursor *_customCursor;	// 192 = 0xc0
}

@property(retain, nonatomic) NSCursor *customCursor; // @synthesize customCursor=_customCursor;
@property(nonatomic) BOOL superviewIsFocusRingClipAncestor; // @synthesize superviewIsFocusRingClipAncestor=_superviewIsFocusRingClipAncestor;
- (void).cxx_destruct;	// IMP=0x00000001000ec396
- (id)_focusRingClipAncestor;	// IMP=0x00000001000ec2cd
@property(retain, nonatomic) NSImage *imageForNonMainWindow;
- (void)setAcceptsFirstMouse:(BOOL)arg1;	// IMP=0x00000001000ec1f8
- (void)resetCursorRects;	// IMP=0x00000001000ec151
- (void)drawRect:(struct CGRect)arg1;	// IMP=0x00000001000ec009
- (BOOL)acceptsFirstMouse:(id)arg1;	// IMP=0x00000001000ebff2

@end
