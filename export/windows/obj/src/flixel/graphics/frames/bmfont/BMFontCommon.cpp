// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont_BMFontCommon
#include <flixel/graphics/frames/bmfont/BMFontCommon.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont_BMFontUtil
#include <flixel/graphics/frames/bmfont/BMFontUtil.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont__BMFontXml_AttribAccess_Impl_
#include <flixel/graphics/frames/bmfont/_BMFontXml/AttribAccess_Impl_.h>
#endif
#ifndef INCLUDED_haxe_io_BytesInput
#include <haxe/io/BytesInput.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_548404df940b75d5_14_new,"flixel.graphics.frames.bmfont.BMFontCommon","new",0x6b9304b4,"flixel.graphics.frames.bmfont.BMFontCommon.new","flixel/graphics/frames/bmfont/BMFontCommon.hx",14,0x09925b3c)
HX_LOCAL_STACK_FRAME(_hx_pos_548404df940b75d5_29_fromXml,"flixel.graphics.frames.bmfont.BMFontCommon","fromXml",0x02982ce1,"flixel.graphics.frames.bmfont.BMFontCommon.fromXml","flixel/graphics/frames/bmfont/BMFontCommon.hx",29,0x09925b3c)
HX_LOCAL_STACK_FRAME(_hx_pos_548404df940b75d5_60_fromText,"flixel.graphics.frames.bmfont.BMFontCommon","fromText",0x3fe43663,"flixel.graphics.frames.bmfont.BMFontCommon.fromText","flixel/graphics/frames/bmfont/BMFontCommon.hx",60,0x09925b3c)
HX_LOCAL_STACK_FRAME(_hx_pos_548404df940b75d5_45_fromText,"flixel.graphics.frames.bmfont.BMFontCommon","fromText",0x3fe43663,"flixel.graphics.frames.bmfont.BMFontCommon.fromText","flixel/graphics/frames/bmfont/BMFontCommon.hx",45,0x09925b3c)
static const int _hx_array_data_c825dac2_5[] = {
	(int)-1,
};
static const int _hx_array_data_c825dac2_6[] = {
	(int)-1,
};
static const int _hx_array_data_c825dac2_7[] = {
	(int)1,
};
static const int _hx_array_data_c825dac2_8[] = {
	(int)1,
};
static const int _hx_array_data_c825dac2_9[] = {
	(int)0,
};
static const bool _hx_array_data_c825dac2_10[] = {
	0,
};
static const int _hx_array_data_c825dac2_11[] = {
	(int)0,
};
static const int _hx_array_data_c825dac2_12[] = {
	(int)0,
};
static const int _hx_array_data_c825dac2_13[] = {
	(int)0,
};
static const int _hx_array_data_c825dac2_14[] = {
	(int)0,
};
HX_LOCAL_STACK_FRAME(_hx_pos_548404df940b75d5_92_fromBytes,"flixel.graphics.frames.bmfont.BMFontCommon","fromBytes",0x57ca1df5,"flixel.graphics.frames.bmfont.BMFontCommon.fromBytes","flixel/graphics/frames/bmfont/BMFontCommon.hx",92,0x09925b3c)
namespace flixel{
namespace graphics{
namespace frames{
namespace bmfont{

void BMFontCommon_obj::__construct(int lineHeight,int base,int scaleW,int scaleH,int pages,bool packed,int alphaChnl,int redChnl,int greenChnl,int blueChnl){
            	HX_STACKFRAME(&_hx_pos_548404df940b75d5_14_new)
HXDLIN(  14)		this->lineHeight = lineHeight;
HXDLIN(  14)		this->base = base;
HXDLIN(  14)		this->scaleW = scaleW;
HXDLIN(  14)		this->scaleH = scaleH;
HXDLIN(  14)		this->pages = pages;
HXDLIN(  14)		this->packed = packed;
HXDLIN(  14)		this->alphaChnl = alphaChnl;
HXDLIN(  14)		this->redChnl = redChnl;
HXDLIN(  14)		this->greenChnl = greenChnl;
HXDLIN(  14)		this->blueChnl = blueChnl;
            	}

Dynamic BMFontCommon_obj::__CreateEmpty() { return new BMFontCommon_obj; }

void *BMFontCommon_obj::_hx_vtable = 0;

Dynamic BMFontCommon_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BMFontCommon_obj > _hx_result = new BMFontCommon_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9]);
	return _hx_result;
}

bool BMFontCommon_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1e2fb8ec;
}

 ::flixel::graphics::frames::bmfont::BMFontCommon BMFontCommon_obj::fromXml( ::Xml commonNode){
            	HX_GC_STACKFRAME(&_hx_pos_548404df940b75d5_29_fromXml)
HXLINE(  31)		int _g = ::flixel::graphics::frames::bmfont::_BMFontXml::AttribAccess_Impl__obj::_hx_int(commonNode,HX_("lineHeight",fb,02,f4,d6));
HXLINE(  32)		int _g1 = ::flixel::graphics::frames::bmfont::_BMFontXml::AttribAccess_Impl__obj::intSafe(commonNode,HX_("base",11,e8,10,41),-1);
HXLINE(  33)		int _g2 = ::flixel::graphics::frames::bmfont::_BMFontXml::AttribAccess_Impl__obj::intWarn(commonNode,HX_("scaleW",8d,ea,25,3c),1);
HXLINE(  34)		int _g3 = ::flixel::graphics::frames::bmfont::_BMFontXml::AttribAccess_Impl__obj::intWarn(commonNode,HX_("scaleH",7e,ea,25,3c),1);
HXLINE(  35)		int _g4 = ::flixel::graphics::frames::bmfont::_BMFontXml::AttribAccess_Impl__obj::intSafe(commonNode,HX_("pages",44,2b,4d,bd),0);
HXLINE(  36)		bool _g5 = ::flixel::graphics::frames::bmfont::_BMFontXml::AttribAccess_Impl__obj::boolSafe(commonNode,HX_("packed",78,57,98,e3),false);
HXLINE(  37)		int _g6 = ::flixel::graphics::frames::bmfont::_BMFontXml::AttribAccess_Impl__obj::intSafe(commonNode,HX_("alphaChnl",a1,44,b9,db),0);
HXLINE(  38)		int _g7 = ::flixel::graphics::frames::bmfont::_BMFontXml::AttribAccess_Impl__obj::intSafe(commonNode,HX_("redChnl",14,ec,44,a7),0);
HXLINE(  39)		int _g8 = ::flixel::graphics::frames::bmfont::_BMFontXml::AttribAccess_Impl__obj::intSafe(commonNode,HX_("greenChnl",86,c2,47,a4),0);
HXLINE(  30)		return  ::flixel::graphics::frames::bmfont::BMFontCommon_obj::__alloc( HX_CTX ,_g,_g1,_g2,_g3,_g4,_g5,_g6,_g7,_g8,::flixel::graphics::frames::bmfont::_BMFontXml::AttribAccess_Impl__obj::intSafe(commonNode,HX_("blueChnl",dd,2d,30,8c),0));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFontCommon_obj,fromXml,return )

 ::flixel::graphics::frames::bmfont::BMFontCommon BMFontCommon_obj::fromText(::String commonText){
            		HX_BEGIN_LOCAL_FUNC_S10(::hx::LocalFunc,_hx_Closure_0,::Array< int >,base,::Array< int >,alphaChnl,::Array< int >,scaleH,::Array< int >,lineHeight,::Array< int >,redChnl,::Array< int >,blueChnl,::Array< int >,greenChnl,::Array< int >,scaleW,::Array< int >,pages,::Array< bool >,packed) HXARGC(2)
            		void _hx_run(::String key,::String value){
            			HX_STACKFRAME(&_hx_pos_548404df940b75d5_60_fromText)
HXLINE(  60)			::String _hx_switch_0 = key;
            			if (  (_hx_switch_0==HX_("alphaChnl",a1,44,b9,db)) ){
HXLINE(  68)				alphaChnl[0] = ( (int)(::Std_obj::parseInt(value)) );
HXDLIN(  68)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("base",11,e8,10,41)) ){
HXLINE(  63)				base[0] = ( (int)(::Std_obj::parseInt(value)) );
HXDLIN(  63)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("blueChnl",dd,2d,30,8c)) ){
HXLINE(  71)				blueChnl[0] = ( (int)(::Std_obj::parseInt(value)) );
HXDLIN(  71)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("greenChnl",86,c2,47,a4)) ){
HXLINE(  70)				greenChnl[0] = ( (int)(::Std_obj::parseInt(value)) );
HXDLIN(  70)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("lineHeight",fb,02,f4,d6)) ){
HXLINE(  62)				lineHeight[0] = ( (int)(::Std_obj::parseInt(value)) );
HXDLIN(  62)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("packed",78,57,98,e3)) ){
HXLINE(  67)				packed[0] = (value != HX_("0",30,00,00,00));
HXDLIN(  67)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("pages",44,2b,4d,bd)) ){
HXLINE(  66)				pages[0] = ( (int)(::Std_obj::parseInt(value)) );
HXDLIN(  66)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("redChnl",14,ec,44,a7)) ){
HXLINE(  69)				redChnl[0] = ( (int)(::Std_obj::parseInt(value)) );
HXDLIN(  69)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("scaleH",7e,ea,25,3c)) ){
HXLINE(  65)				scaleH[0] = ( (int)(::Std_obj::parseInt(value)) );
HXDLIN(  65)				goto _hx_goto_2;
            			}
            			if (  (_hx_switch_0==HX_("scaleW",8d,ea,25,3c)) ){
HXLINE(  64)				scaleW[0] = ( (int)(::Std_obj::parseInt(value)) );
HXDLIN(  64)				goto _hx_goto_2;
            			}
            			_hx_goto_2:;
            		}
            		HX_END_LOCAL_FUNC2((void))

            	HX_GC_STACKFRAME(&_hx_pos_548404df940b75d5_45_fromText)
HXLINE(  46)		::Array< int > lineHeight = ::Array_obj< int >::fromData( _hx_array_data_c825dac2_5,1);
HXLINE(  47)		::Array< int > base = ::Array_obj< int >::fromData( _hx_array_data_c825dac2_6,1);
HXLINE(  48)		::Array< int > scaleW = ::Array_obj< int >::fromData( _hx_array_data_c825dac2_7,1);
HXLINE(  49)		::Array< int > scaleH = ::Array_obj< int >::fromData( _hx_array_data_c825dac2_8,1);
HXLINE(  50)		::Array< int > pages = ::Array_obj< int >::fromData( _hx_array_data_c825dac2_9,1);
HXLINE(  51)		::Array< bool > packed = ::Array_obj< bool >::fromData( _hx_array_data_c825dac2_10,1);
HXLINE(  52)		::Array< int > alphaChnl = ::Array_obj< int >::fromData( _hx_array_data_c825dac2_11,1);
HXLINE(  53)		::Array< int > redChnl = ::Array_obj< int >::fromData( _hx_array_data_c825dac2_12,1);
HXLINE(  54)		::Array< int > greenChnl = ::Array_obj< int >::fromData( _hx_array_data_c825dac2_13,1);
HXLINE(  55)		::Array< int > blueChnl = ::Array_obj< int >::fromData( _hx_array_data_c825dac2_14,1);
HXLINE(  57)		::flixel::graphics::frames::bmfont::BMFontUtil_obj::forEachAttribute(commonText, ::Dynamic(new _hx_Closure_0(base,alphaChnl,scaleH,lineHeight,redChnl,blueChnl,greenChnl,scaleW,pages,packed)));
HXLINE(  76)		return  ::flixel::graphics::frames::bmfont::BMFontCommon_obj::__alloc( HX_CTX ,lineHeight->__get(0),base->__get(0),scaleW->__get(0),scaleH->__get(0),pages->__get(0),packed->__get(0),alphaChnl->__get(0),redChnl->__get(0),greenChnl->__get(0),blueChnl->__get(0));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFontCommon_obj,fromText,return )

 ::flixel::graphics::frames::bmfont::BMFontCommon BMFontCommon_obj::fromBytes( ::haxe::io::BytesInput bytes){
            	HX_GC_STACKFRAME(&_hx_pos_548404df940b75d5_92_fromBytes)
HXLINE(  93)		int blockSize = bytes->readInt32();
HXLINE(  94)		if ((blockSize != 15)) {
HXLINE(  95)			HX_STACK_DO_THROW((HX_("Invalid block size for common block. Expected 15 got ",ac,2f,ff,0a) + blockSize));
            		}
HXLINE(  98)		int _g = bytes->readInt16();
HXLINE(  99)		int _g1 = bytes->readInt16();
HXLINE( 100)		int _g2 = bytes->readInt16();
HXLINE( 101)		int _g3 = bytes->readInt16();
HXLINE( 102)		int _g4 = bytes->readInt16();
HXLINE( 103)		bool _g5 = ((bytes->readByte() & 2) != 0);
HXLINE( 104)		int _g6 = bytes->readByte();
HXLINE( 105)		int _g7 = bytes->readByte();
HXLINE( 106)		int _g8 = bytes->readByte();
HXLINE(  97)		return  ::flixel::graphics::frames::bmfont::BMFontCommon_obj::__alloc( HX_CTX ,_g,_g1,_g2,_g3,_g4,_g5,_g6,_g7,_g8,bytes->readByte());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFontCommon_obj,fromBytes,return )


BMFontCommon_obj::BMFontCommon_obj()
{
}

::hx::Val BMFontCommon_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"base") ) { return ::hx::Val( base ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pages") ) { return ::hx::Val( pages ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scaleW") ) { return ::hx::Val( scaleW ); }
		if (HX_FIELD_EQ(inName,"scaleH") ) { return ::hx::Val( scaleH ); }
		if (HX_FIELD_EQ(inName,"packed") ) { return ::hx::Val( packed ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"redChnl") ) { return ::hx::Val( redChnl ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"blueChnl") ) { return ::hx::Val( blueChnl ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alphaChnl") ) { return ::hx::Val( alphaChnl ); }
		if (HX_FIELD_EQ(inName,"greenChnl") ) { return ::hx::Val( greenChnl ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lineHeight") ) { return ::hx::Val( lineHeight ); }
	}
	return super::__Field(inName,inCallProp);
}

bool BMFontCommon_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"fromXml") ) { outValue = fromXml_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromText") ) { outValue = fromText_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"fromBytes") ) { outValue = fromBytes_dyn(); return true; }
	}
	return false;
}

::hx::Val BMFontCommon_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"base") ) { base=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"pages") ) { pages=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"scaleW") ) { scaleW=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"scaleH") ) { scaleH=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"packed") ) { packed=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"redChnl") ) { redChnl=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"blueChnl") ) { blueChnl=inValue.Cast< int >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"alphaChnl") ) { alphaChnl=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"greenChnl") ) { greenChnl=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"lineHeight") ) { lineHeight=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BMFontCommon_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("lineHeight",fb,02,f4,d6));
	outFields->push(HX_("base",11,e8,10,41));
	outFields->push(HX_("scaleW",8d,ea,25,3c));
	outFields->push(HX_("scaleH",7e,ea,25,3c));
	outFields->push(HX_("pages",44,2b,4d,bd));
	outFields->push(HX_("packed",78,57,98,e3));
	outFields->push(HX_("alphaChnl",a1,44,b9,db));
	outFields->push(HX_("redChnl",14,ec,44,a7));
	outFields->push(HX_("greenChnl",86,c2,47,a4));
	outFields->push(HX_("blueChnl",dd,2d,30,8c));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BMFontCommon_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(BMFontCommon_obj,lineHeight),HX_("lineHeight",fb,02,f4,d6)},
	{::hx::fsInt,(int)offsetof(BMFontCommon_obj,base),HX_("base",11,e8,10,41)},
	{::hx::fsInt,(int)offsetof(BMFontCommon_obj,scaleW),HX_("scaleW",8d,ea,25,3c)},
	{::hx::fsInt,(int)offsetof(BMFontCommon_obj,scaleH),HX_("scaleH",7e,ea,25,3c)},
	{::hx::fsInt,(int)offsetof(BMFontCommon_obj,pages),HX_("pages",44,2b,4d,bd)},
	{::hx::fsBool,(int)offsetof(BMFontCommon_obj,packed),HX_("packed",78,57,98,e3)},
	{::hx::fsInt,(int)offsetof(BMFontCommon_obj,alphaChnl),HX_("alphaChnl",a1,44,b9,db)},
	{::hx::fsInt,(int)offsetof(BMFontCommon_obj,redChnl),HX_("redChnl",14,ec,44,a7)},
	{::hx::fsInt,(int)offsetof(BMFontCommon_obj,greenChnl),HX_("greenChnl",86,c2,47,a4)},
	{::hx::fsInt,(int)offsetof(BMFontCommon_obj,blueChnl),HX_("blueChnl",dd,2d,30,8c)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BMFontCommon_obj_sStaticStorageInfo = 0;
#endif

static ::String BMFontCommon_obj_sMemberFields[] = {
	HX_("lineHeight",fb,02,f4,d6),
	HX_("base",11,e8,10,41),
	HX_("scaleW",8d,ea,25,3c),
	HX_("scaleH",7e,ea,25,3c),
	HX_("pages",44,2b,4d,bd),
	HX_("packed",78,57,98,e3),
	HX_("alphaChnl",a1,44,b9,db),
	HX_("redChnl",14,ec,44,a7),
	HX_("greenChnl",86,c2,47,a4),
	HX_("blueChnl",dd,2d,30,8c),
	::String(null()) };

::hx::Class BMFontCommon_obj::__mClass;

static ::String BMFontCommon_obj_sStaticFields[] = {
	HX_("fromXml",8d,3e,06,58),
	HX_("fromText",37,9b,c5,aa),
	HX_("fromBytes",a1,f2,20,72),
	::String(null())
};

void BMFontCommon_obj::__register()
{
	BMFontCommon_obj _hx_dummy;
	BMFontCommon_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.graphics.frames.bmfont.BMFontCommon",c2,da,25,c8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BMFontCommon_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(BMFontCommon_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BMFontCommon_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BMFontCommon_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BMFontCommon_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BMFontCommon_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
} // end namespace bmfont
