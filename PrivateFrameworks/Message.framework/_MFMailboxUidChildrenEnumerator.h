/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@class NSMutableArray;

@interface _MFMailboxUidChildrenEnumerator : NSEnumerator {
    BOOL _includeHidden;
    unsigned int _index;
    NSMutableArray *_mailboxes;
}

- (id)_initWithMailbox:(id)arg1 includeHiddenChildren:(BOOL)arg2;
- (void)dealloc;
- (id)nextObject;

@end
