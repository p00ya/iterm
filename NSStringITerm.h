// $Id$
//
//  NSStringJTerminal.h
//
//  Additional fucntion to NSString Class by Category
//  2001.11.13 by Y.Hanahara
//  2002.05.18 by Kiichi Kusama
//

#import <Foundation/Foundation.h>


@interface NSString (iTerm)

+ (NSString *)stringWithInt:(int)num;
+ (BOOL)isDoubleWidthCharacter:(unichar)unicode;

- (NSMutableString *) stringReplaceSubstringFrom:(NSString *)oldSubstring to:(NSString *)newSubstring;

@end
