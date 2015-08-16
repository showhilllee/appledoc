/*!
 @header 这里的信息应该与该源代码文件的名字一致
 @abstract 关于这个源代码文件的一些基本描述
 @author Kevin Wu (作者信息)
 @version 1.00 2012/01/20 Creation (此文档的版本信息)
 */

#import <Foundation/Foundation.h>

/*!
 @enum
 @abstract 关于这个enum的一些基本信息
 @constant HelloDocEnumDocDemoTagNumberPopupView PopupView的Tag
 @constant HelloDocEnumDocDemoTagNumberOKButton OK按钮的Tag
 */
typedef enum HelloDocEnumDocDemo_{
  HelloDocEnumDocDemoTagNumberPopupView = 100,
  HelloDocEnumDocDemoTagNumberOKButton,
}HelloDocEnumDocDemo;


/*!
 @protocol
 @abstract 这个HelloDoc类的一个protocol
 @discussion 具体描述信息可以写在这里
 */
@protocol HelloDocDelegate <NSObject>

@end

/*!
 @class
 @abstract 这里可以写关于这个类的一些描述。
 */
@interface HelloDoc : NSObject {
}

/*!
 @property
 @abstract 这里可以写关于这个Property的一些基本描述。
 */
@property (nonatomic,readonly) NSString *helloDocText_;

/*!
 @method
 @abstract 这里可以写一些关于这个方法的一些简要描述
 @discussion 这里可以具体写写这个方法如何使用，注意点之类的。如果你是设计一个抽象类或者一个
 共通类给给其他类继承的话，建议在这里具体描述一下怎样使用这个方法。
 @param text 文字 (这里把这个方法需要的参数列出来)
 @param error 错误参照
 @result 返回结果
 */
- (BOOL)showText:(NSString *)text 
           error:(NSError **)error;

@end

/*!
 @category
 @abstract NSString的Category
 */
@interface KevinNSString (NSString)

@end
