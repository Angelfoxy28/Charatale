// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_opengl_ext_OES_rgb8_rgba8
#include <lime/graphics/opengl/ext/OES_rgb8_rgba8.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_4c7657ea6f006b0a_4_new,"lime.graphics.opengl.ext.OES_rgb8_rgba8","new",0x41961de6,"lime.graphics.opengl.ext.OES_rgb8_rgba8.new","lime/graphics/opengl/ext/OES_rgb8_rgba8.hx",4,0xbc116168)
namespace lime{
namespace graphics{
namespace opengl{
namespace ext{

void OES_rgb8_rgba8_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_4c7657ea6f006b0a_4_new)
HXLINE(   7)		this->RGBA8_OES = 32856;
HXLINE(   6)		this->RGB8_OES = 32849;
            	}

Dynamic OES_rgb8_rgba8_obj::__CreateEmpty() { return new OES_rgb8_rgba8_obj; }

void *OES_rgb8_rgba8_obj::_hx_vtable = 0;

Dynamic OES_rgb8_rgba8_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OES_rgb8_rgba8_obj > _hx_result = new OES_rgb8_rgba8_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OES_rgb8_rgba8_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x42ddb87c;
}


OES_rgb8_rgba8_obj::OES_rgb8_rgba8_obj()
{
}

::hx::Val OES_rgb8_rgba8_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"RGB8_OES") ) { return ::hx::Val( RGB8_OES ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"RGBA8_OES") ) { return ::hx::Val( RGBA8_OES ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val OES_rgb8_rgba8_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 8:
		if (HX_FIELD_EQ(inName,"RGB8_OES") ) { RGB8_OES=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"RGBA8_OES") ) { RGBA8_OES=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void OES_rgb8_rgba8_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("RGB8_OES",a9,3d,a2,bb));
	outFields->push(HX_("RGBA8_OES",82,4a,84,a1));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo OES_rgb8_rgba8_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(OES_rgb8_rgba8_obj,RGB8_OES),HX_("RGB8_OES",a9,3d,a2,bb)},
	{::hx::fsInt,(int)offsetof(OES_rgb8_rgba8_obj,RGBA8_OES),HX_("RGBA8_OES",82,4a,84,a1)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *OES_rgb8_rgba8_obj_sStaticStorageInfo = 0;
#endif

static ::String OES_rgb8_rgba8_obj_sMemberFields[] = {
	HX_("RGB8_OES",a9,3d,a2,bb),
	HX_("RGBA8_OES",82,4a,84,a1),
	::String(null()) };

::hx::Class OES_rgb8_rgba8_obj::__mClass;

void OES_rgb8_rgba8_obj::__register()
{
	OES_rgb8_rgba8_obj _hx_dummy;
	OES_rgb8_rgba8_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime.graphics.opengl.ext.OES_rgb8_rgba8",f4,f2,33,97);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(OES_rgb8_rgba8_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< OES_rgb8_rgba8_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OES_rgb8_rgba8_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OES_rgb8_rgba8_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace graphics
} // end namespace opengl
} // end namespace ext
