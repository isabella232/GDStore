//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/retechretech/dev/workspace/realtime/realtime-store/src/main/java/com/goodow/realtime/store/impl/TextDeletedEventImpl.java
//
//  Created by retechretech.
//

#ifndef _ComGoodowRealtimeStoreImplTextDeletedEventImpl_H_
#define _ComGoodowRealtimeStoreImplTextDeletedEventImpl_H_

@protocol ComGoodowRealtimeJsonJsonObject;

#import "JreEmulation.h"
#include "com/goodow/realtime/store/TextDeletedEvent.h"
#include "com/goodow/realtime/store/impl/BaseModelEventImpl.h"

@interface ComGoodowRealtimeStoreImplTextDeletedEventImpl : ComGoodowRealtimeStoreImplBaseModelEventImpl < ComGoodowRealtimeStoreTextDeletedEvent > {
 @public
  int index__;
  NSString *text__;
}

- (id)initWithComGoodowRealtimeJsonJsonObject:(id<ComGoodowRealtimeJsonJsonObject>)serialized;

- (int)index;

- (NSString *)text;

- (void)copyAllFieldsTo:(ComGoodowRealtimeStoreImplTextDeletedEventImpl *)other;

@end

__attribute__((always_inline)) inline void ComGoodowRealtimeStoreImplTextDeletedEventImpl_init() {}

J2OBJC_FIELD_SETTER(ComGoodowRealtimeStoreImplTextDeletedEventImpl, text__, NSString *)

#endif // _ComGoodowRealtimeStoreImplTextDeletedEventImpl_H_
