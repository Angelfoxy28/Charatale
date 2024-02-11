#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel__FlxGame_FlxIntroSplash
#include <flixel/_FlxGame/FlxIntroSplash.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_system_FlxSplash
#include <flixel/system/FlxSplash.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_55d3e170e0a59f10_900_new,"flixel._FlxGame.FlxIntroSplash","new",0xa309920a,"flixel._FlxGame.FlxIntroSplash.new","flixel/FlxGame.hx",900,0x34f39fed)
HX_LOCAL_STACK_FRAME(_hx_pos_55d3e170e0a59f10_903_startOutro,"flixel._FlxGame.FlxIntroSplash","startOutro",0xa4b3c39f,"flixel._FlxGame.FlxIntroSplash.startOutro","flixel/FlxGame.hx",903,0x34f39fed)
namespace flixel{
namespace _FlxGame{

void FlxIntroSplash_obj::__construct( ::Dynamic nextState){
            	HX_STACKFRAME(&_hx_pos_55d3e170e0a59f10_900_new)
HXDLIN( 900)		super::__construct(nextState);
            	}

Dynamic FlxIntroSplash_obj::__CreateEmpty() { return new FlxIntroSplash_obj; }

void *FlxIntroSplash_obj::_hx_vtable = 0;

Dynamic FlxIntroSplash_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxIntroSplash_obj > _hx_result = new FlxIntroSplash_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlxIntroSplash_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		if (inClassId<=(int)0x607fd7e6) {
			if (inClassId<=(int)0x1df1346e) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x1df1346e;
			} else {
				return inClassId==(int)0x607fd7e6;
			}
		} else {
			return inClassId==(int)0x62817b24;
		}
	} else {
		return inClassId==(int)0x7c795c9f || inClassId==(int)0x7ccf8994;
	}
}

void FlxIntroSplash_obj::startOutro( ::Dynamic onOutroComplete){
            	HX_STACKFRAME(&_hx_pos_55d3e170e0a59f10_903_startOutro)
HXLINE( 904)		::flixel::FlxG_obj::game->_gameJustStarted = true;
HXLINE( 905)		this->super::startOutro(onOutroComplete);
            	}



::hx::ObjectPtr< FlxIntroSplash_obj > FlxIntroSplash_obj::__new( ::Dynamic nextState) {
	::hx::ObjectPtr< FlxIntroSplash_obj > __this = new FlxIntroSplash_obj();
	__this->__construct(nextState);
	return __this;
}

::hx::ObjectPtr< FlxIntroSplash_obj > FlxIntroSplash_obj::__alloc(::hx::Ctx *_hx_ctx, ::Dynamic nextState) {
	FlxIntroSplash_obj *__this = (FlxIntroSplash_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxIntroSplash_obj), true, "flixel._FlxGame.FlxIntroSplash"));
	*(void **)__this = FlxIntroSplash_obj::_hx_vtable;
	__this->__construct(nextState);
	return __this;
}

FlxIntroSplash_obj::FlxIntroSplash_obj()
{
}

::hx::Val FlxIntroSplash_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"startOutro") ) { return ::hx::Val( startOutro_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *FlxIntroSplash_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FlxIntroSplash_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxIntroSplash_obj_sMemberFields[] = {
	HX_("startOutro",09,9c,3f,53),
	::String(null()) };

::hx::Class FlxIntroSplash_obj::__mClass;

void FlxIntroSplash_obj::__register()
{
	FlxIntroSplash_obj _hx_dummy;
	FlxIntroSplash_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel._FlxGame.FlxIntroSplash",18,85,09,af);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxIntroSplash_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxIntroSplash_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxIntroSplash_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxIntroSplash_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace _FlxGame