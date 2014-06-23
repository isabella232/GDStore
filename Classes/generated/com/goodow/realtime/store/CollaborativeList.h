//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/retechretech/dev/workspace/realtime/realtime-store/src/main/java/com/goodow/realtime/store/CollaborativeList.java
//
//  Created by retechretech.
//

#ifndef _ComGoodowRealtimeStoreCollaborativeList_H_
#define _ComGoodowRealtimeStoreCollaborativeList_H_

@protocol ComGoodowRealtimeCoreHandler;
@protocol ComGoodowRealtimeCoreRegistration;
@protocol ComGoodowRealtimeJsonJsonArray;
@protocol ComGoodowRealtimeStoreIndexReference;
@protocol JavaUtilComparator;

#import "JreEmulation.h"
#include "com/goodow/realtime/store/CollaborativeObject.h"

@protocol ComGoodowRealtimeStoreCollaborativeList < ComGoodowRealtimeStoreCollaborativeObject, NSObject, JavaObject >
- (id<ComGoodowRealtimeCoreRegistration>)onValuesAddedWithComGoodowRealtimeCoreHandler:(id<ComGoodowRealtimeCoreHandler>)handler;

- (id<ComGoodowRealtimeCoreRegistration>)onValuesRemovedWithComGoodowRealtimeCoreHandler:(id<ComGoodowRealtimeCoreHandler>)handler;

- (id<ComGoodowRealtimeCoreRegistration>)onValuesSetWithComGoodowRealtimeCoreHandler:(id<ComGoodowRealtimeCoreHandler>)handler;

- (id<ComGoodowRealtimeJsonJsonArray>)asArray;

- (void)clear;

- (id)getWithInt:(int)index;

- (int)indexOfWithId:(id)value
withJavaUtilComparator:(id<JavaUtilComparator>)opt_comparator;

- (void)insertWithInt:(int)index
               withId:(id)value;

- (void)insertAllWithInt:(int)index
withComGoodowRealtimeJsonJsonArray:(id<ComGoodowRealtimeJsonJsonArray>)values;

- (int)lastIndexOfWithId:(id)value
  withJavaUtilComparator:(id<JavaUtilComparator>)opt_comparator;

- (int)pushWithId:(id)value;

- (void)pushAllWithComGoodowRealtimeJsonJsonArray:(id<ComGoodowRealtimeJsonJsonArray>)values;

- (id<ComGoodowRealtimeStoreIndexReference>)registerReferenceWithInt:(int)index
                                                         withBoolean:(BOOL)canBeDeleted;

- (void)removeWithInt:(int)index;

- (void)removeRangeWithInt:(int)startIndex
                   withInt:(int)endIndex;

- (BOOL)removeValueWithId:(id)value;

- (void)replaceRangeWithInt:(int)index
withComGoodowRealtimeJsonJsonArray:(id<ComGoodowRealtimeJsonJsonArray>)values;

- (void)setWithInt:(int)index
            withId:(id)value;

- (int)length;

- (void)setLengthWithInt:(int)length;

@end

__attribute__((always_inline)) inline void ComGoodowRealtimeStoreCollaborativeList_init() {}

#endif // _ComGoodowRealtimeStoreCollaborativeList_H_
