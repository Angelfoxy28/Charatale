// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_flixel_graphics_atlas__AseAtlas_AseAtlasTagDirection_Impl_
#include <flixel/graphics/atlas/_AseAtlas/AseAtlasTagDirection_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_1abe9245d4707fb2_141_isForward,"flixel.graphics.atlas._AseAtlas.AseAtlasTagDirection_Impl_","isForward",0x22232775,"flixel.graphics.atlas._AseAtlas.AseAtlasTagDirection_Impl_.isForward","flixel/graphics/atlas/AseAtlas.hx",141,0x195d9311)
HX_LOCAL_STACK_FRAME(_hx_pos_1abe9245d4707fb2_145_isReverse,"flixel.graphics.atlas._AseAtlas.AseAtlasTagDirection_Impl_","isReverse",0x57547ed2,"flixel.graphics.atlas._AseAtlas.AseAtlasTagDirection_Impl_.isReverse","flixel/graphics/atlas/AseAtlas.hx",145,0x195d9311)
HX_LOCAL_STACK_FRAME(_hx_pos_1abe9245d4707fb2_149_isPingPong,"flixel.graphics.atlas._AseAtlas.AseAtlasTagDirection_Impl_","isPingPong",0x240173da,"flixel.graphics.atlas._AseAtlas.AseAtlasTagDirection_Impl_.isPingPong","flixel/graphics/atlas/AseAtlas.hx",149,0x195d9311)
HX_LOCAL_STACK_FRAME(_hx_pos_1abe9245d4707fb2_134_boot,"flixel.graphics.atlas._AseAtlas.AseAtlasTagDirection_Impl_","boot",0x9f4a8df8,"flixel.graphics.atlas._AseAtlas.AseAtlasTagDirection_Impl_.boot","flixel/graphics/atlas/AseAtlas.hx",134,0x195d9311)
HX_LOCAL_STACK_FRAME(_hx_pos_1abe9245d4707fb2_135_boot,"flixel.graphics.atlas._AseAtlas.AseAtlasTagDirection_Impl_","boot",0x9f4a8df8,"flixel.graphics.atlas._AseAtlas.AseAtlasTagDirection_Impl_.boot","flixel/graphics/atlas/AseAtlas.hx",135,0x195d9311)
HX_LOCAL_STACK_FRAME(_hx_pos_1abe9245d4707fb2_136_boot,"flixel.graphics.atlas._AseAtlas.AseAtlasTagDirection_Impl_","boot",0x9f4a8df8,"flixel.graphics.atlas._AseAtlas.AseAtlasTagDirection_Impl_.boot","flixel/graphics/atlas/AseAtlas.hx",136,0x195d9311)
HX_LOCAL_STACK_FRAME(_hx_pos_1abe9245d4707fb2_137_boot,"flixel.graphics.atlas._AseAtlas.AseAtlasTagDirection_Impl_","boot",0x9f4a8df8,"flixel.graphics.atlas._AseAtlas.AseAtlasTagDirection_Impl_.boot","flixel/graphics/atlas/AseAtlas.hx",137,0x195d9311)
namespace flixel{
namespace graphics{
namespace atlas{
namespace _AseAtlas{

void AseAtlasTagDirection_Impl__obj::__construct() { }

Dynamic AseAtlasTagDirection_Impl__obj::__CreateEmpty() { return new AseAtlasTagDirection_Impl__obj; }

void *AseAtlasTagDirection_Impl__obj::_hx_vtable = 0;

Dynamic AseAtlasTagDirection_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AseAtlasTagDirection_Impl__obj > _hx_result = new AseAtlasTagDirection_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AseAtlasTagDirection_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7dd1d690;
}

::String AseAtlasTagDirection_Impl__obj::FORWARD;

::String AseAtlasTagDirection_Impl__obj::REVERSE;

::String AseAtlasTagDirection_Impl__obj::PINGPONG;

::String AseAtlasTagDirection_Impl__obj::PINGPONG_REVERSE;

bool AseAtlasTagDirection_Impl__obj::isForward(::String this1){
            	HX_STACKFRAME(&_hx_pos_1abe9245d4707fb2_141_isForward)
HXDLIN( 141)		if ((this1 != HX_("forward",c5,e1,ca,e5))) {
HXDLIN( 141)			return (this1 == HX_("pingpong",6a,93,43,a8));
            		}
            		else {
HXDLIN( 141)			return true;
            		}
HXDLIN( 141)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AseAtlasTagDirection_Impl__obj,isForward,return )

bool AseAtlasTagDirection_Impl__obj::isReverse(::String this1){
            	HX_STACKFRAME(&_hx_pos_1abe9245d4707fb2_145_isReverse)
HXDLIN( 145)		bool _hx_tmp;
HXDLIN( 145)		if ((this1 != HX_("forward",c5,e1,ca,e5))) {
HXDLIN( 145)			_hx_tmp = (this1 == HX_("pingpong",6a,93,43,a8));
            		}
            		else {
HXDLIN( 145)			_hx_tmp = true;
            		}
HXDLIN( 145)		return !(_hx_tmp);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AseAtlasTagDirection_Impl__obj,isReverse,return )

bool AseAtlasTagDirection_Impl__obj::isPingPong(::String this1){
            	HX_STACKFRAME(&_hx_pos_1abe9245d4707fb2_149_isPingPong)
HXDLIN( 149)		if ((this1 != HX_("pingpong",6a,93,43,a8))) {
HXDLIN( 149)			return (this1 == HX_("pingpong_reverse",0d,a0,38,6f));
            		}
            		else {
HXDLIN( 149)			return true;
            		}
HXDLIN( 149)		return false;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(AseAtlasTagDirection_Impl__obj,isPingPong,return )


AseAtlasTagDirection_Impl__obj::AseAtlasTagDirection_Impl__obj()
{
}

bool AseAtlasTagDirection_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 9:
		if (HX_FIELD_EQ(inName,"isForward") ) { outValue = isForward_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"isReverse") ) { outValue = isReverse_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"isPingPong") ) { outValue = isPingPong_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AseAtlasTagDirection_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo AseAtlasTagDirection_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &AseAtlasTagDirection_Impl__obj::FORWARD,HX_("FORWARD",a5,b5,9e,65)},
	{::hx::fsString,(void *) &AseAtlasTagDirection_Impl__obj::REVERSE,HX_("REVERSE",02,0d,d0,9a)},
	{::hx::fsString,(void *) &AseAtlasTagDirection_Impl__obj::PINGPONG,HX_("PINGPONG",6a,23,c9,01)},
	{::hx::fsString,(void *) &AseAtlasTagDirection_Impl__obj::PINGPONG_REVERSE,HX_("PINGPONG_REVERSE",ed,03,a2,a0)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void AseAtlasTagDirection_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AseAtlasTagDirection_Impl__obj::FORWARD,"FORWARD");
	HX_MARK_MEMBER_NAME(AseAtlasTagDirection_Impl__obj::REVERSE,"REVERSE");
	HX_MARK_MEMBER_NAME(AseAtlasTagDirection_Impl__obj::PINGPONG,"PINGPONG");
	HX_MARK_MEMBER_NAME(AseAtlasTagDirection_Impl__obj::PINGPONG_REVERSE,"PINGPONG_REVERSE");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AseAtlasTagDirection_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AseAtlasTagDirection_Impl__obj::FORWARD,"FORWARD");
	HX_VISIT_MEMBER_NAME(AseAtlasTagDirection_Impl__obj::REVERSE,"REVERSE");
	HX_VISIT_MEMBER_NAME(AseAtlasTagDirection_Impl__obj::PINGPONG,"PINGPONG");
	HX_VISIT_MEMBER_NAME(AseAtlasTagDirection_Impl__obj::PINGPONG_REVERSE,"PINGPONG_REVERSE");
};

#endif

::hx::Class AseAtlasTagDirection_Impl__obj::__mClass;

static ::String AseAtlasTagDirection_Impl__obj_sStaticFields[] = {
	HX_("FORWARD",a5,b5,9e,65),
	HX_("REVERSE",02,0d,d0,9a),
	HX_("PINGPONG",6a,23,c9,01),
	HX_("PINGPONG_REVERSE",ed,03,a2,a0),
	HX_("isForward",fb,5e,c9,e9),
	HX_("isReverse",58,b6,fa,1e),
	HX_("isPingPong",94,d1,cb,0d),
	::String(null())
};

void AseAtlasTagDirection_Impl__obj::__register()
{
	AseAtlasTagDirection_Impl__obj _hx_dummy;
	AseAtlasTagDirection_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.graphics.atlas._AseAtlas.AseAtlasTagDirection_Impl_",68,ac,4d,1e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AseAtlasTagDirection_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AseAtlasTagDirection_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AseAtlasTagDirection_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< AseAtlasTagDirection_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AseAtlasTagDirection_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AseAtlasTagDirection_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AseAtlasTagDirection_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void AseAtlasTagDirection_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_1abe9245d4707fb2_134_boot)
HXDLIN( 134)		FORWARD = HX_("forward",c5,e1,ca,e5);
            	}
{
            	HX_STACKFRAME(&_hx_pos_1abe9245d4707fb2_135_boot)
HXDLIN( 135)		REVERSE = HX_("reverse",22,39,fc,1a);
            	}
{
            	HX_STACKFRAME(&_hx_pos_1abe9245d4707fb2_136_boot)
HXDLIN( 136)		PINGPONG = HX_("pingpong",6a,93,43,a8);
            	}
{
            	HX_STACKFRAME(&_hx_pos_1abe9245d4707fb2_137_boot)
HXDLIN( 137)		PINGPONG_REVERSE = HX_("pingpong_reverse",0d,a0,38,6f);
            	}
}

} // end namespace flixel
} // end namespace graphics
} // end namespace atlas
} // end namespace _AseAtlas
