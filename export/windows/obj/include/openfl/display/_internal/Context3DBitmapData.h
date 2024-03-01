// Generated by Haxe 4.3.3
#ifndef INCLUDED_openfl_display__internal_Context3DBitmapData
#define INCLUDED_openfl_display__internal_Context3DBitmapData

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,display,BitmapData)
HX_DECLARE_CLASS2(openfl,display,DisplayObjectRenderer)
HX_DECLARE_CLASS2(openfl,display,IBitmapDrawable)
HX_DECLARE_CLASS2(openfl,display,OpenGLRenderer)
HX_DECLARE_CLASS3(openfl,display,_internal,Context3DBitmapData)
HX_DECLARE_CLASS2(openfl,events,EventDispatcher)
HX_DECLARE_CLASS2(openfl,events,IEventDispatcher)

namespace openfl{
namespace display{
namespace _internal{


class HXCPP_CLASS_ATTRIBUTES Context3DBitmapData_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Context3DBitmapData_obj OBJ_;
		Context3DBitmapData_obj();

	public:
		enum { _hx_ClassId = 0x2f63e92f };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="openfl.display._internal.Context3DBitmapData")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"openfl.display._internal.Context3DBitmapData"); }

		inline static ::hx::ObjectPtr< Context3DBitmapData_obj > __new() {
			::hx::ObjectPtr< Context3DBitmapData_obj > __this = new Context3DBitmapData_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Context3DBitmapData_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Context3DBitmapData_obj *__this = (Context3DBitmapData_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Context3DBitmapData_obj), false, "openfl.display._internal.Context3DBitmapData"));
			*(void **)__this = Context3DBitmapData_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Context3DBitmapData_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Context3DBitmapData",19,c6,be,f4); }

		static void renderDrawable( ::openfl::display::BitmapData bitmapData, ::openfl::display::OpenGLRenderer renderer);
		static ::Dynamic renderDrawable_dyn();

		static void renderDrawableMask( ::openfl::display::BitmapData bitmapData, ::openfl::display::OpenGLRenderer renderer);
		static ::Dynamic renderDrawableMask_dyn();

};

} // end namespace openfl
} // end namespace display
} // end namespace _internal

#endif /* INCLUDED_openfl_display__internal_Context3DBitmapData */ 
