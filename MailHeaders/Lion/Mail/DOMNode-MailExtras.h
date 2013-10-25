/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */

#import "DOMNode.h"

@class DOMHTMLElement;

@interface DOMNode (MailExtras)
- (id)XPathRelativeTo:(id)arg1;
- (void)_removeStrayLinefeedsAtEnd;
- (void)_removeStrayLinefeedsAtBeginning;
- (void)removeStrayLinefeeds;
- (BOOL)isTemporaryCursorMarker;
@property(readonly) BOOL _mail_isAttached;
- (id)nextSiblingOrAunt;
@property(readonly) DOMNode *nextNode;
@property(readonly) DOMNode *previousNode;
- (id)_mail_traverseNextNodeStayingWithin:(id)arg1;
- (id)_mail_traverseNextSiblingStayingWithin:(id)arg1;
- (id)_mail_traversePreviousNode;
- (id)stringValue;
- (id)appendBlockPlaceholder;
- (BOOL)isBlockLevelElement;
- (id)blockNodeAncestor;
- (BOOL)isNodeThatAffectsTyping;
@property(readonly) BOOL isBody;
@property(readonly) BOOL isListElement;
- (BOOL)hasNoContents;
- (BOOL)_hasNoSignificantContentsOrWhitespace:(BOOL)arg1 orAttachments:(BOOL)arg2;
- (BOOL)hasNoSignificantContents;
- (BOOL)hasNoSignificantContentsOrWhitespace;
- (BOOL)hasNoSignificantContentsOtherThanAttachments;
- (long long)quoteLevel;
- (long long)quoteLevelDelta;
- (id)containingBlockQuote;
- (id)highestContainingBlockQuote;
- (id)firstDescendantBlockQuote;
- (BOOL)isDescendantOfNode:(id)arg1;
- (id)commonAncestorWithNode:(id)arg1;
- (unsigned int)offsetOfChild:(id)arg1;
- (BOOL)isAtBeginningOfContainerNode:(id)arg1;
- (BOOL)isAtEndOfContainerNode:(id)arg1;
- (id)nestedListElement;
- (id)descendantNamed:(id)arg1;
- (id)firstContainingNodeWithNameInArray:(id)arg1;
- (id)topmostContainingNodeWithNameInArray:(id)arg1;
- (id)containingListItem;
- (id)precedingListItem;
- (long long)outlineNestingLevel;
- (id)topmostEditableAncestor;
- (BOOL)isInEditableRegion;
- (BOOL)containsOnlySelectionMarkers;
@property(readonly) DOMHTMLElement *containingListElement;
- (BOOL)containsRichTextForMessageFont:(id)arg1;
- (BOOL)_isAppleStringAttachmentSpan;
- (void)recursivelyRemoveMailAttributes:(BOOL)arg1 convertObjectsToImages:(BOOL)arg2 convertEditableElements:(BOOL)arg3 removeDefaultColorStyle:(BOOL)arg4;
- (void)restoreEditableElementsEdited:(id *)arg1 unedited:(id *)arg2;
- (void)recursivelyRemoveMailAttributes;
- (void)recursivelyFixParagraphs;
- (void)fixParagraphsAndQuotesFromMicrosoftNodesToRemove:(id)arg1;
- (void)fixParagraphsAndQuotesFromMicrosoft;
- (id)attributedStringWithDocument:(id)arg1;
- (BOOL)convertInternalImagesToObjects;
- (id)stationeryDynamicElementNodes;
- (void)stationeryDynamicElementNodes:(id *)arg1;
- (id)tilingElements;
- (id)tilingDiv;
- (id)editableElements;
- (void)editableElements:(id *)arg1;
- (id)lastEditableElement;
- (id)descendantsWithClassName:(id)arg1;
- (void)descendants:(id *)arg1 withClassName:(id)arg2;
- (id)objectElementChildNodes;
- (void)objectElementChildNodes:(id *)arg1;
- (id)stationeryAttachmentPlaceholderNodes;
- (void)stationeryAttachmentPlaceholderNodes:(id *)arg1;
- (id)findElementWithTag:(id)arg1 andClass:(id)arg2;
- (id)findElementWithTag:(id)arg1 className:(id)arg2 andIdName:(id)arg3;
- (void)addInlineBackgroundImageURLToArray:(id)arg1;
- (BOOL)convertInlineStationeryBackgroundImageURL;
- (void)convertBackgroundImageURLsUsingDictionary:(id)arg1;
- (void)insertAsSiblingBeforeNode:(id)arg1;
- (void)insertAsSiblingAfterNode:(id)arg1;
@end
