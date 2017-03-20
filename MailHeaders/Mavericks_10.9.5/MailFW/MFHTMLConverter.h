/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSPortDelegate.h"

@class NSData, NSPort, WebView;

@interface MFHTMLConverter : NSObject <NSPortDelegate>
{
    WebView *_webView;
    NSPort *_replyPort;
    unsigned int _sequenceNumber:31;
    SEL _mainThreadSelector;
    BOOL _didHandlePortMessage;
    NSData *_resultData;
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(retain) NSData *resultData; // @synthesize resultData=_resultData;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;
- (id)webView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;
- (id)webView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 locationChangeDone:(id)arg2 forDataSource:(id)arg3;
- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;
- (id)_archivedHTMLStringWithInlinedStyleFromLoadedDocument;
- (id)_archivedDataFromLoadedDocument;
- (id)_archivedAttributedStringFromLoadedDocument;
- (void)_loadWebViewOnMainThreadFromData:(id)arg1 withTextEncodingName:(id)arg2 orFromWebArchive:(id)arg3;
- (void)_setUpWebView;
- (void)_stopLoadingWebView;
- (void)_setMainThreadSelector:(SEL)arg1;
- (void)handlePortMessage:(id)arg1;
- (id)htmlStringWithInlinedStyleFromHTMLData:(id)arg1 textEncodingName:(id)arg2;
- (id)junkStringFromHTMLData:(id)arg1 textEncodingName:(id)arg2 context:(id)arg3;
- (id)attributedStringFromWebArchive:(id)arg1;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;
- (void)dealloc;
- (id)init;

@end
