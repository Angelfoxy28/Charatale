// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_openfl_desktop_Icon
#include <openfl/desktop/Icon.h>
#endif
#ifndef INCLUDED_openfl_desktop_InteractiveIcon
#include <openfl/desktop/InteractiveIcon.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_825272b71bc0d9c3_19_new,"openfl.desktop.InteractiveIcon","new",0x34345f5d,"openfl.desktop.InteractiveIcon.new","openfl/desktop/InteractiveIcon.hx",19,0xf6754c35)
namespace openfl{
namespace desktop{

void InteractiveIcon_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_825272b71bc0d9c3_19_new)
HXLINE(  44)		this->height = 0;
HXLINE(  34)		this->width = 0;
HXLINE(  23)		super::__construct();
            	}

Dynamic InteractiveIcon_obj::__CreateEmpty() { return new InteractiveIcon_obj; }

void *InteractiveIcon_obj::_hx_vtable = 0;

Dynamic InteractiveIcon_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< InteractiveIcon_obj > _hx_result = new InteractiveIcon_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool InteractiveIcon_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2de3da5d) {
		if (inClassId<=(int)0x0c89e854) {
			return inClassId==(int)0x00000001 || inClassId==(int)0x0c89e854;
		} else {
			return inClassId==(int)0x2de3da5d;
		}
	} else {
		return inClassId==(int)0x684cf74f;
	}
}


::hx::ObjectPtr< InteractiveIcon_obj > InteractiveIcon_obj::__new() {
	::hx::ObjectPtr< InteractiveIcon_obj > __this = new InteractiveIcon_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< InteractiveIcon_obj > InteractiveIcon_obj::__alloc(::hx::Ctx *_hx_ctx) {
	InteractiveIcon_obj *__this = (InteractiveIcon_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(InteractiveIcon_obj), true, "openfl.desktop.InteractiveIcon"));
	*(void **)__this = InteractiveIcon_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

InteractiveIcon_obj::InteractiveIcon_obj()
{
}

::hx::Val InteractiveIcon_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val InteractiveIcon_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void InteractiveIcon_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo InteractiveIcon_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(InteractiveIcon_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsInt,(int)offsetof(InteractiveIcon_obj,height),HX_("height",e7,07,4c,02)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *InteractiveIcon_obj_sStaticStorageInfo = 0;
#endif

static ::String InteractiveIcon_obj_sMemberFields[] = {
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	::String(null()) };

::hx::Class InteractiveIcon_obj::__mClass;

void InteractiveIcon_obj::__register()
{
	InteractiveIcon_obj _hx_dummy;
	InteractiveIcon_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.desktop.InteractiveIcon",eb,6c,a8,8b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(InteractiveIcon_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< InteractiveIcon_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = InteractiveIcon_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = InteractiveIcon_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace openfl
} // end namespace desktop
