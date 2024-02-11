#ifndef INCLUDED_flixel_util__FlxPool_PoolFactory_Impl_
#define INCLUDED_flixel_util__FlxPool_PoolFactory_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS3(flixel,util,_FlxPool,PoolFactory_Impl_)

namespace flixel{
namespace util{
namespace _FlxPool{


class HXCPP_CLASS_ATTRIBUTES PoolFactory_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PoolFactory_Impl__obj OBJ_;
		PoolFactory_Impl__obj();

	public:
		enum { _hx_ClassId = 0x4b202ac1 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="flixel.util._FlxPool.PoolFactory_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"flixel.util._FlxPool.PoolFactory_Impl_"); }

		inline static ::hx::ObjectPtr< PoolFactory_Impl__obj > __new() {
			::hx::ObjectPtr< PoolFactory_Impl__obj > __this = new PoolFactory_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< PoolFactory_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			PoolFactory_Impl__obj *__this = (PoolFactory_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PoolFactory_Impl__obj), false, "flixel.util._FlxPool.PoolFactory_Impl_"));
			*(void **)__this = PoolFactory_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PoolFactory_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PoolFactory_Impl_",4e,42,8b,db); }

		static  ::Dynamic fromClass(::hx::Class classRef);
		static ::Dynamic fromClass_dyn();

		static  ::Dynamic fromFunction( ::Dynamic func);
		static ::Dynamic fromFunction_dyn();

		static  ::Dynamic getFunction( ::Dynamic this1);
		static ::Dynamic getFunction_dyn();

};

} // end namespace flixel
} // end namespace util
} // end namespace _FlxPool

#endif /* INCLUDED_flixel_util__FlxPool_PoolFactory_Impl_ */ 