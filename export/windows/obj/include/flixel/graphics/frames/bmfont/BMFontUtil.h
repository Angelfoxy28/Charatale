// Generated by Haxe 4.3.3
#ifndef INCLUDED_flixel_graphics_frames_bmfont_BMFontUtil
#define INCLUDED_flixel_graphics_frames_bmfont_BMFontUtil

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(EReg)
HX_DECLARE_CLASS4(flixel,graphics,frames,bmfont,BMFontUtil)

namespace flixel{
namespace graphics{
namespace frames{
namespace bmfont{


class HXCPP_CLASS_ATTRIBUTES BMFontUtil_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef BMFontUtil_obj OBJ_;
		BMFontUtil_obj();

	public:
		enum { _hx_ClassId = 0x7e55f0e7 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.graphics.frames.bmfont.BMFontUtil")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.graphics.frames.bmfont.BMFontUtil"); }

		inline static ::hx::ObjectPtr< BMFontUtil_obj > __new() {
			::hx::ObjectPtr< BMFontUtil_obj > __this = new BMFontUtil_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< BMFontUtil_obj > __alloc(::hx::Ctx *_hx_ctx) {
			BMFontUtil_obj *__this = (BMFontUtil_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(BMFontUtil_obj), false, "flixel.graphics.frames.bmfont.BMFontUtil"));
			*(void **)__this = BMFontUtil_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~BMFontUtil_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("BMFontUtil",5c,ae,ad,af); }

		static void __boot();
		static  ::EReg attFinder;
		static void forEachAttribute(::String text, ::Dynamic callback);
		static ::Dynamic forEachAttribute_dyn();

};

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
} // end namespace bmfont

#endif /* INCLUDED_flixel_graphics_frames_bmfont_BMFontUtil */ 
