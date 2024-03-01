// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_lime_graphics_Image
#include <lime/graphics/Image.h>
#endif
#ifndef INCLUDED_openfl_display_Bitmap
#include <openfl/display/Bitmap.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_CanvasRenderer
#include <openfl/display/CanvasRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectRenderer
#include <openfl/display/DisplayObjectRenderer.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display__internal_CanvasBitmap
#include <openfl/display/_internal/CanvasBitmap.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_b6ae860a04406516_15_render,"openfl.display._internal.CanvasBitmap","render",0x396f6081,"openfl.display._internal.CanvasBitmap.render","openfl/display/_internal/CanvasBitmap.hx",15,0x24e40a98)
HX_LOCAL_STACK_FRAME(_hx_pos_b6ae860a04406516_61_renderDrawable,"openfl.display._internal.CanvasBitmap","renderDrawable",0xd71ff13f,"openfl.display._internal.CanvasBitmap.renderDrawable","openfl/display/_internal/CanvasBitmap.hx",61,0x24e40a98)
HX_LOCAL_STACK_FRAME(_hx_pos_b6ae860a04406516_84_renderDrawableMask,"openfl.display._internal.CanvasBitmap","renderDrawableMask",0x5dda69cb,"openfl.display._internal.CanvasBitmap.renderDrawableMask","openfl/display/_internal/CanvasBitmap.hx",84,0x24e40a98)
HX_LOCAL_STACK_FRAME(_hx_pos_b6ae860a04406516_12_boot,"openfl.display._internal.CanvasBitmap","boot",0x0b97489d,"openfl.display._internal.CanvasBitmap.boot","openfl/display/_internal/CanvasBitmap.hx",12,0x24e40a98)
namespace openfl{
namespace display{
namespace _internal{

void CanvasBitmap_obj::__construct() { }

Dynamic CanvasBitmap_obj::__CreateEmpty() { return new CanvasBitmap_obj; }

void *CanvasBitmap_obj::_hx_vtable = 0;

Dynamic CanvasBitmap_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CanvasBitmap_obj > _hx_result = new CanvasBitmap_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool CanvasBitmap_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0d80ad31;
}

void CanvasBitmap_obj::render( ::openfl::display::Bitmap bitmap, ::openfl::display::CanvasRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_b6ae860a04406516_15_render)
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasBitmap_obj,render,(void))

void CanvasBitmap_obj::renderDrawable( ::openfl::display::Bitmap bitmap, ::openfl::display::CanvasRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_b6ae860a04406516_61_renderDrawable)
HXLINE(  62)		renderer->_hx___updateCacheBitmap(bitmap,false);
HXLINE(  64)		bool _hx_tmp;
HXDLIN(  64)		if (::hx::IsNotNull( bitmap->_hx___bitmapData )) {
HXLINE(  64)			_hx_tmp = ::hx::IsNotNull( bitmap->_hx___bitmapData->image );
            		}
            		else {
HXLINE(  64)			_hx_tmp = false;
            		}
HXDLIN(  64)		if (_hx_tmp) {
HXLINE(  66)			bitmap->_hx___imageVersion = bitmap->_hx___bitmapData->image->version;
            		}
HXLINE(  69)		bool _hx_tmp1;
HXDLIN(  69)		if (::hx::IsNotNull( bitmap->_hx___cacheBitmap )) {
HXLINE(  69)			_hx_tmp1 = !(bitmap->_hx___isCacheBitmapRender);
            		}
            		else {
HXLINE(  69)			_hx_tmp1 = false;
            		}
HXLINE(  79)		renderer->_hx___renderEvent(bitmap);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasBitmap_obj,renderDrawable,(void))

void CanvasBitmap_obj::renderDrawableMask( ::openfl::display::Bitmap bitmap, ::openfl::display::CanvasRenderer renderer){
            	HX_STACKFRAME(&_hx_pos_b6ae860a04406516_84_renderDrawableMask)
HXDLIN(  84)		 ::Dynamic renderer1 =  ::Dynamic(renderer->context->__Field(HX_("rect",24,4d,a7,4b),::hx::paccDynamic));
HXDLIN(  84)		Float _hx_tmp = bitmap->get_width();
HXDLIN(  84)		renderer1(0,0,_hx_tmp,bitmap->get_height());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(CanvasBitmap_obj,renderDrawableMask,(void))


CanvasBitmap_obj::CanvasBitmap_obj()
{
}

bool CanvasBitmap_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"render") ) { outValue = render_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"renderDrawable") ) { outValue = renderDrawable_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"renderDrawableMask") ) { outValue = renderDrawableMask_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *CanvasBitmap_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *CanvasBitmap_obj_sStaticStorageInfo = 0;
#endif

::hx::Class CanvasBitmap_obj::__mClass;

static ::String CanvasBitmap_obj_sStaticFields[] = {
	HX_("render",56,6b,29,05),
	HX_("renderDrawable",14,59,d0,dd),
	HX_("renderDrawableMask",20,e0,a3,66),
	::String(null())
};

void CanvasBitmap_obj::__register()
{
	CanvasBitmap_obj _hx_dummy;
	CanvasBitmap_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("openfl.display._internal.CanvasBitmap",e3,f3,24,4b);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &CanvasBitmap_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(CanvasBitmap_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< CanvasBitmap_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CanvasBitmap_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CanvasBitmap_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void CanvasBitmap_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_b6ae860a04406516_12_boot)
HXDLIN(  12)		__mClass->__meta__ =  ::Dynamic(::hx::Anon_obj::Create(1)
            			->setFixed(0,HX_("obj",f7,8f,54,00), ::Dynamic(::hx::Anon_obj::Create(1)
            				->setFixed(0,HX_("SuppressWarnings",0c,d3,d2,00),::cpp::VirtualArray_obj::__new(1)->init(0,HX_("checkstyle:FieldDocComment",70,56,1b,20))))));
            	}
}

} // end namespace openfl
} // end namespace display
} // end namespace _internal
