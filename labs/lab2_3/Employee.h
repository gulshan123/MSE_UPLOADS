#import<Foundation/Foundation.h>

@interface Employee:NSObject
{
	int empid;
	NSString *dept;
	NSString *name;
}

-(void)show;

/*
-(void)setName:(NSString *)aname;
-(void)setDept:(NSString *)adept;
-(void)setId:(int)employeeid;
*/
@property int empid;
@property (assign) NSString * name;
@property (assign) NSString * dept;
@end