// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_f8ebd3e8714d9448_10_new,"flixel.math.FlxMatrix","new",0x62dffc51,"flixel.math.FlxMatrix.new","flixel/math/FlxMatrix.hx",10,0x564a249f)
HX_LOCAL_STACK_FRAME(_hx_pos_f8ebd3e8714d9448_20_rotateWithTrig,"flixel.math.FlxMatrix","rotateWithTrig",0xc09bf72c,"flixel.math.FlxMatrix.rotateWithTrig","flixel/math/FlxMatrix.hx",20,0x564a249f)
HX_LOCAL_STACK_FRAME(_hx_pos_f8ebd3e8714d9448_41_rotateBy180,"flixel.math.FlxMatrix","rotateBy180",0x7fa14e88,"flixel.math.FlxMatrix.rotateBy180","flixel/math/FlxMatrix.hx",41,0x564a249f)
HX_LOCAL_STACK_FRAME(_hx_pos_f8ebd3e8714d9448_51_rotateByPositive90,"flixel.math.FlxMatrix","rotateByPositive90",0xae397fb1,"flixel.math.FlxMatrix.rotateByPositive90","flixel/math/FlxMatrix.hx",51,0x564a249f)
HX_LOCAL_STACK_FRAME(_hx_pos_f8ebd3e8714d9448_61_rotateByNegative90,"flixel.math.FlxMatrix","rotateByNegative90",0xf52d666d,"flixel.math.FlxMatrix.rotateByNegative90","flixel/math/FlxMatrix.hx",61,0x564a249f)
HX_LOCAL_STACK_FRAME(_hx_pos_f8ebd3e8714d9448_78_transformX,"flixel.math.FlxMatrix","transformX",0x33d1359b,"flixel.math.FlxMatrix.transformX","flixel/math/FlxMatrix.hx",78,0x564a249f)
HX_LOCAL_STACK_FRAME(_hx_pos_f8ebd3e8714d9448_93_transformY,"flixel.math.FlxMatrix","transformY",0x33d1359c,"flixel.math.FlxMatrix.transformY","flixel/math/FlxMatrix.hx",93,0x564a249f)
namespace flixel{
namespace math{

void FlxMatrix_obj::__construct( ::Dynamic a, ::Dynamic b, ::Dynamic c, ::Dynamic d, ::Dynamic tx, ::Dynamic ty){
            	HX_STACKFRAME(&_hx_pos_f8ebd3e8714d9448_10_new)
HXDLIN(  10)		super::__construct(a,b,c,d,tx,ty);
            	}

Dynamic FlxMatrix_obj::__CreateEmpty() { return new FlxMatrix_obj; }

void *FlxMatrix_obj::_hx_vtable = 0;

Dynamic FlxMatrix_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxMatrix_obj > _hx_result = new FlxMatrix_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool FlxMatrix_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x065caf19) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x065caf19;
	} else {
		return inClassId==(int)0x666c094f;
	}
}

 ::flixel::math::FlxMatrix FlxMatrix_obj::rotateWithTrig(Float cos,Float sin){
            	HX_STACKFRAME(&_hx_pos_f8ebd3e8714d9448_20_rotateWithTrig)
HXLINE(  21)		Float a1 = ((this->a * cos) - (this->b * sin));
HXLINE(  22)		this->b = ((this->a * sin) + (this->b * cos));
HXLINE(  23)		this->a = a1;
HXLINE(  25)		Float c1 = ((this->c * cos) - (this->d * sin));
HXLINE(  26)		this->d = ((this->c * sin) + (this->d * cos));
HXLINE(  27)		this->c = c1;
HXLINE(  29)		Float tx1 = ((this->tx * cos) - (this->ty * sin));
HXLINE(  30)		this->ty = ((this->tx * sin) + (this->ty * cos));
HXLINE(  31)		this->tx = tx1;
HXLINE(  33)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMatrix_obj,rotateWithTrig,return )

 ::flixel::math::FlxMatrix FlxMatrix_obj::rotateBy180(){
            	HX_STACKFRAME(&_hx_pos_f8ebd3e8714d9448_41_rotateBy180)
HXLINE(  42)		this->setTo(-(this->a),-(this->b),-(this->c),-(this->d),-(this->tx),-(this->ty));
HXLINE(  43)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxMatrix_obj,rotateBy180,return )

 ::flixel::math::FlxMatrix FlxMatrix_obj::rotateByPositive90(){
            	HX_STACKFRAME(&_hx_pos_f8ebd3e8714d9448_51_rotateByPositive90)
HXLINE(  52)		this->setTo(-(this->b),this->a,-(this->d),this->c,-(this->ty),this->tx);
HXLINE(  53)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxMatrix_obj,rotateByPositive90,return )

 ::flixel::math::FlxMatrix FlxMatrix_obj::rotateByNegative90(){
            	HX_STACKFRAME(&_hx_pos_f8ebd3e8714d9448_61_rotateByNegative90)
HXLINE(  62)		this->setTo(this->b,-(this->a),this->d,-(this->c),this->ty,-(this->tx));
HXLINE(  63)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxMatrix_obj,rotateByNegative90,return )

Float FlxMatrix_obj::transformX(Float px,Float py){
            	HX_STACKFRAME(&_hx_pos_f8ebd3e8714d9448_78_transformX)
HXDLIN(  78)		return (((px * this->a) + (py * this->c)) + this->tx);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMatrix_obj,transformX,return )

Float FlxMatrix_obj::transformY(Float px,Float py){
            	HX_STACKFRAME(&_hx_pos_f8ebd3e8714d9448_93_transformY)
HXDLIN(  93)		return (((px * this->b) + (py * this->d)) + this->ty);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxMatrix_obj,transformY,return )


::hx::ObjectPtr< FlxMatrix_obj > FlxMatrix_obj::__new( ::Dynamic a, ::Dynamic b, ::Dynamic c, ::Dynamic d, ::Dynamic tx, ::Dynamic ty) {
	::hx::ObjectPtr< FlxMatrix_obj > __this = new FlxMatrix_obj();
	__this->__construct(a,b,c,d,tx,ty);
	return __this;
}

::hx::ObjectPtr< FlxMatrix_obj > FlxMatrix_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic a, ::Dynamic b, ::Dynamic c, ::Dynamic d, ::Dynamic tx, ::Dynamic ty) {
	FlxMatrix_obj *__this = (FlxMatrix_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxMatrix_obj), true, "flixel.math.FlxMatrix"));
	*(void **)__this = FlxMatrix_obj::_hx_vtable;
	__this->__construct(a,b,c,d,tx,ty);
	return __this;
}

FlxMatrix_obj::FlxMatrix_obj()
{
}

::hx::Val FlxMatrix_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"transformX") ) { return ::hx::Val( transformX_dyn() ); }
		if (HX_FIELD_EQ(inName,"transformY") ) { return ::hx::Val( transformY_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"rotateBy180") ) { return ::hx::Val( rotateBy180_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"rotateWithTrig") ) { return ::hx::Val( rotateWithTrig_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"rotateByPositive90") ) { return ::hx::Val( rotateByPositive90_dyn() ); }
		if (HX_FIELD_EQ(inName,"rotateByNegative90") ) { return ::hx::Val( rotateByNegative90_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxMatrix_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxMatrix_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxMatrix_obj_sMemberFields[] = {
	HX_("rotateWithTrig",7d,0f,08,e3),
	HX_("rotateBy180",97,49,2e,8f),
	HX_("rotateByPositive90",82,94,06,b8),
	HX_("rotateByNegative90",3e,7b,fa,fe),
	HX_("transformX",6c,91,34,9b),
	HX_("transformY",6d,91,34,9b),
	::String(null()) };

::hx::Class FlxMatrix_obj::__mClass;

void FlxMatrix_obj::__register()
{
	FlxMatrix_obj _hx_dummy;
	FlxMatrix_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.math.FlxMatrix",df,7f,9d,67);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxMatrix_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxMatrix_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxMatrix_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxMatrix_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace math
