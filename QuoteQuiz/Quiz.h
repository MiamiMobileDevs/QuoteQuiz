//
//  Quiz.h
//  QuoteQuiz
//
//  Created by Eric Aguiar on 2/23/15.
//  Copyright (c) 2015 Eric Aguiar. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Quiz : NSObject

@property (nonatomic, retain) NSMutableArray * movieArray; // Previous Property
@property (nonatomic, assign) NSInteger correctCount;
@property (nonatomic, assign) NSInteger incorrectCount;
@property (nonatomic, assign) NSInteger quizCount;
@property (nonatomic, readonly, strong) NSString * quote;
@property (nonatomic, readonly, strong) NSString * ans1;
@property (nonatomic, readonly, strong) NSString * ans2;
@property (nonatomic, readonly, strong) NSString * ans3;
@property (nonatomic, assign) NSInteger tipCount;
@property (nonatomic, strong) NSString * tip;

-(id) initWithQuiz:(NSString*)plistName; // Previous Method
-(void) nextQuestion: (NSUInteger) idx;
-(BOOL) checkQuestion: (NSUInteger) question forAnswer: (NSUInteger) answer;

@end
