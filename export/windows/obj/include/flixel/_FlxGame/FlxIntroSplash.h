// Generated by Haxe 4.3.3
#ifndef INCLUDED_flixel__FlxGame_FlxIntroSplash
#define INCLUDED_flixel__FlxGame_FlxIntroSplash

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_flixel_system_FlxSplash
#include <flixel/system/FlxSplash.h>
#endif
HX_DECLARE_CLASS1(flixel,FlxBasic)
HX_DECLARE_CLASS1(flixel,FlxState)
HX_DECLARE_CLASS2(flixel,_FlxGame,FlxIntroSplash)
HX_DECLARE_CLASS2(flixel,group,FlxTypedGroup)
HX_DECLARE_CLASS2(flixel,_hx_system,FlxSplash)
HX_DECLARE_CLASS2(flixel,util,IFlxDestroyable)

namespace flixel{
namespace _FlxGame{


class HXCPP_CLASS_ATTRIBUTES FlxIntroSplash_obj : public  ::flixel::_hx_system::FlxSplash_obj
{
	public:
		typedef  ::flixel::_hx_system::FlxSplash_obj super;
		typedef FlxIntroSplash_obj OBJ_;
		FlxIntroSplash_obj();

	public:
		enum { _hx_ClassId = 0x1df1346e };

		void __construct( ::Dynamic nextState);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="flixel._FlxGame.FlxIntroSplash")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"flixel._FlxGame.FlxIntroSplash"); }
		static ::hx::ObjectPtr< FlxIntroSplash_obj > __new( ::Dynamic nextState);
		static ::hx::ObjectPtr< FlxIntroSplash_obj > __alloc(::hx::Ctx *_hx_ctx, ::Dynamic nextState);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~FlxIntroSplash_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("FlxIntroSplash",c1,11,97,e3); }

		void startOutro( ::Dynamic onOutroComplete);

};

} // end namespace flixel
} // end namespace _FlxGame

#endif /* INCLUDED_flixel__FlxGame_FlxIntroSplash */ 
