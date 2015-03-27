/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class ML3DatabaseConnection;

@interface ML3AccountCacheDatabase : NSObject {
    ML3DatabaseConnection *_databaseConnection;
}

- (void).cxx_destruct;
- (BOOL)_clearCacheDatabase;
- (BOOL)_closeDatabase;
- (id)_databasePath;
- (BOOL)_internalSetAppleID:(id)arg1 forDSID:(unsigned long long)arg2;
- (BOOL)_openDatabase;
- (BOOL)_openDatabaseIsRetry:(BOOL)arg1;
- (id)appleIDForDSID:(unsigned long long)arg1;
- (id)init;
- (BOOL)setAppleID:(id)arg1 forDSID:(unsigned long long)arg2;

@end