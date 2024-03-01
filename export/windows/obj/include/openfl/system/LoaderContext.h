// Generated by Haxe 4.3.3
#ifndef INCLUDED_openfl_system_LoaderContext
#define INCLUDED_openfl_system_LoaderContext

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(openfl,_hx_system,ApplicationDomain)
HX_DECLARE_CLASS2(openfl,_hx_system,LoaderContext)
HX_DECLARE_CLASS2(openfl,_hx_system,SecurityDomain)

namespace openfl{
namespace _hx_system{


class HXCPP_CLASS_ATTRIBUTES LoaderContext_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef LoaderContext_obj OBJ_;
		LoaderContext_obj();

	public:
		enum { _hx_ClassId = 0x7fb55741 };

		void __construct(::hx::Null< bool >  __o_checkPolicyFile, ::openfl::_hx_system::ApplicationDomain applicationDomain, ::openfl::_hx_system::SecurityDomain securityDomain);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="openfl.system.LoaderContext")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"openfl.system.LoaderContext"); }
		static ::hx::ObjectPtr< LoaderContext_obj > __new(::hx::Null< bool >  __o_checkPolicyFile, ::openfl::_hx_system::ApplicationDomain applicationDomain, ::openfl::_hx_system::SecurityDomain securityDomain);
		static ::hx::ObjectPtr< LoaderContext_obj > __alloc(::hx::Ctx *_hx_ctx,::hx::Null< bool >  __o_checkPolicyFile, ::openfl::_hx_system::ApplicationDomain applicationDomain, ::openfl::_hx_system::SecurityDomain securityDomain);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LoaderContext_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("LoaderContext",fc,3d,01,c1); }

		bool allowCodeImport;
		bool allowLoadBytesCodeExecution;
		 ::openfl::_hx_system::ApplicationDomain applicationDomain;
		bool checkPolicyFile;
		 ::openfl::_hx_system::SecurityDomain securityDomain;
};

} // end namespace openfl
} // end namespace system

#endif /* INCLUDED_openfl_system_LoaderContext */ 
