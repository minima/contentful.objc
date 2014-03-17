//
//  ContentfulBaseTestCase.h
//  ContentfulSDK
//
//  Created by Boris Bügling on 06/03/14.
//
//

#import <ContentfulDeliveryAPI/ContentfulDeliveryAPI.h>
#import <XCTest/XCTest.h>

#import "AsyncTesting.h"

@interface ContentfulBaseTestCase : XCTestCase

@property (nonatomic) CDAClient* client;

- (void)assertField:(CDAField*)field
      hasIdentifier:(NSString*)identifier
               name:(NSString*)name
               type:(CDAFieldType)type;
- (void)compareImage:(UIImage*)image forTestSelector:(SEL)testSelector;

@end
