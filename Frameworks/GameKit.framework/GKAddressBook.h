/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@interface GKAddressBook : NSObject {
    void *_addressBook;
    void *_source;
}

@property(readonly) void *addressBook;
@property(readonly) void *source;

+ (void*)copySourceForPlayerID:(id)arg1 withAddressBook:(void*)arg2;

- (id)activeAccount;
- (void*)addressBook;
- (void*)contactForEmail:(id)arg1;
- (void*)contactForPlayer:(id)arg1;
- (void)dealloc;
- (id)initWithPlayerID:(id)arg1;
- (void)playerID:(id*)arg1 requestID:(id*)arg2 forThunderdomeContact:(void*)arg3;
- (void*)rootContactForContact:(void*)arg1;
- (void)setAlias:(id)arg1 playerID:(id)arg2 requestID:(id)arg3 forThunderdomeContact:(void*)arg4;
- (void)setExternalIdentifier:(id)arg1;
- (void*)setOrCreateTDContact:(void*)arg1 withContact:(void*)arg2 forPlayer:(id)arg3;
- (void*)setPlayer:(id)arg1 forContact:(void*)arg2;
- (void)showContacts;
- (void*)source;
- (id)stringWithContact:(void*)arg1;

@end