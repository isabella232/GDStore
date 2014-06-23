//
//  Generated by the J2ObjC translator.  DO NOT EDIT!
//  source: /Users/retechretech/dev/workspace/realtime/realtime-store/src/main/java/com/goodow/realtime/store/CollaborativeList.java
//
//  Created by retechretech.
//

#include "IOSClass.h"
#include "com/goodow/realtime/core/Handler.h"
#include "com/goodow/realtime/core/Registration.h"
#include "com/goodow/realtime/json/JsonArray.h"
#include "com/goodow/realtime/store/CollaborativeList.h"
#include "com/goodow/realtime/store/IndexReference.h"
#include "com/google/gwt/core/client/js/JsType.h"
#include "java/util/Comparator.h"

@interface ComGoodowRealtimeStoreCollaborativeList : NSObject
@end

@implementation ComGoodowRealtimeStoreCollaborativeList

+ (J2ObjcClassInfo *)__metadata {
  static J2ObjcMethodInfo methods[] = {
    { "onValuesAddedWithComGoodowRealtimeCoreHandler:", "onValuesAdded", "Lcom.goodow.realtime.core.Registration;", 0x401, NULL },
    { "onValuesRemovedWithComGoodowRealtimeCoreHandler:", "onValuesRemoved", "Lcom.goodow.realtime.core.Registration;", 0x401, NULL },
    { "onValuesSetWithComGoodowRealtimeCoreHandler:", "onValuesSet", "Lcom.goodow.realtime.core.Registration;", 0x401, NULL },
    { "asArray", NULL, "Lcom.goodow.realtime.json.JsonArray;", 0x401, NULL },
    { "clear", NULL, "V", 0x401, NULL },
    { "getWithInt:", "get", "TT;", 0x401, NULL },
    { "indexOfWithId:withJavaUtilComparator:", "indexOf", "I", 0x401, NULL },
    { "insertWithInt:withId:", "insert", "V", 0x401, NULL },
    { "insertAllWithInt:withComGoodowRealtimeJsonJsonArray:", "insertAll", "V", 0x401, NULL },
    { "lastIndexOfWithId:withJavaUtilComparator:", "lastIndexOf", "I", 0x401, NULL },
    { "pushWithId:", "push", "I", 0x401, NULL },
    { "pushAllWithComGoodowRealtimeJsonJsonArray:", "pushAll", "V", 0x401, NULL },
    { "registerReferenceWithInt:withBoolean:", "registerReference", "Lcom.goodow.realtime.store.IndexReference;", 0x401, NULL },
    { "removeWithInt:", "remove", "V", 0x401, NULL },
    { "removeRangeWithInt:withInt:", "removeRange", "V", 0x401, NULL },
    { "removeValueWithId:", "removeValue", "Z", 0x401, NULL },
    { "replaceRangeWithInt:withComGoodowRealtimeJsonJsonArray:", "replaceRange", "V", 0x401, NULL },
    { "setWithInt:withId:", "set", "V", 0x401, NULL },
    { "length", NULL, "I", 0x401, NULL },
    { "setLengthWithInt:", "setLength", "V", 0x401, NULL },
  };
  static J2ObjcClassInfo _ComGoodowRealtimeStoreCollaborativeList = { "CollaborativeList", "com.goodow.realtime.store", NULL, 0x201, 20, methods, 0, NULL, 0, NULL};
  return &_ComGoodowRealtimeStoreCollaborativeList;
}

@end
