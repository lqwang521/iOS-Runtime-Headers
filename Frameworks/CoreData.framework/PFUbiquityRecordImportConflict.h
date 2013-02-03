/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@class NSDate, NSNumber, NSManagedObject, NSDictionary, NSString, PFUbiquityImportContext, PFUbiquityKnowledgeVector, NSArray;

@interface PFUbiquityRecordImportConflict : NSObject {
    NSDate *_conflictLogDate;
    NSDictionary *_conflictingLogContent;
    PFUbiquityKnowledgeVector *_conflictingLogKnowledgeVector;
    NSNumber *_conflictingLogTransactionNumber;
    int _conflictingLogTransactionType;
    NSString *_conflictingObjectGlobalIDStr;
    PFUbiquityKnowledgeVector *_currentKnowledgeVector;
    NSDictionary *_globalIDIndexToLocalIDURIMap;
    PFUbiquityImportContext *_importContext;
    NSManagedObject *_sourceObject;
    NSArray *_transactionHistory;
}

@property(retain) NSDate * conflictLogDate;
@property(retain) NSDictionary * conflictingLogContent;
@property(retain) PFUbiquityKnowledgeVector * conflictingLogKnowledgeVector;
@property(retain) NSNumber * conflictingLogTransactionNumber;
@property int conflictingLogTransactionType;
@property(retain) NSString * conflictingObjectGlobalIDStr;
@property(retain) PFUbiquityKnowledgeVector * currentKnowledgeVector;
@property(retain) NSDictionary * globalIDIndexToLocalIDURIMap;
@property(retain) PFUbiquityImportContext * importContext;
@property(retain) NSManagedObject * sourceObject;
@property(retain) NSArray * transactionHistory;

+ (id)createTransactionLogForTransactionEntry:(id)arg1 withImportContext:(id)arg2 error:(id*)arg3;
+ (id)electAncestorKnowledgeVectorForKnowledgeVector:(id)arg1 withExportingPeerID:(id)arg2 fromPeerSnapshotCollection:(id)arg3;
+ (void)initialize;
+ (int)resolvedTypeForConflictingLogType:(int)arg1 andLatestTransactionEntry:(id)arg2 skipObject:(BOOL*)arg3;

- (id)_newNormalizedSnapshot:(id)arg1 forObject:(id)arg2;
- (id)conflictLogDate;
- (id)conflictingLogContent;
- (id)conflictingLogKnowledgeVector;
- (id)conflictingLogTransactionNumber;
- (int)conflictingLogTransactionType;
- (id)conflictingObjectGlobalIDStr;
- (id)createSetOfManagedObjectIDsForGlobalIDsInRelationship:(id)arg1 withValue:(id)arg2 withGlobalIDToLocalIDURIMap:(id)arg3 andTransactionLog:(id)arg4;
- (id)createSnapshotDictionaryForObjectWithEntry:(id)arg1 inTransactionLog:(id)arg2 withError:(id*)arg3;
- (id)createSnapshotDictionaryFromLogEntry:(id)arg1 withError:(id*)arg2;
- (id)createSnapshotFromLogContent:(id)arg1 withTransactionLog:(id)arg2;
- (id)createSnapshotFromManagedObject:(id)arg1;
- (id)currentKnowledgeVector;
- (void)dealloc;
- (id)description;
- (id)globalIDIndexToLocalIDURIMap;
- (id)importContext;
- (id)init;
- (BOOL)resolveConflict:(id*)arg1;
- (BOOL)resolveMergeConflictForLogContent:(id)arg1 previousSnapshot:(id)arg2 andAncestorSnapshot:(id)arg3 withOldVersion:(unsigned int)arg4 andNewVersion:(unsigned int)arg5 error:(id*)arg6;
- (void)setConflictLogDate:(id)arg1;
- (void)setConflictingLogContent:(id)arg1;
- (void)setConflictingLogKnowledgeVector:(id)arg1;
- (void)setConflictingLogTransactionNumber:(id)arg1;
- (void)setConflictingLogTransactionType:(int)arg1;
- (void)setConflictingObjectGlobalIDStr:(id)arg1;
- (void)setCurrentKnowledgeVector:(id)arg1;
- (void)setGlobalIDIndexToLocalIDURIMap:(id)arg1;
- (void)setImportContext:(id)arg1;
- (void)setSourceObject:(id)arg1;
- (void)setTransactionHistory:(id)arg1;
- (id)sourceObject;
- (id)transactionHistory;

@end