#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont_BMFontChar
#include <flixel/graphics/frames/bmfont/BMFontChar.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_bmfont_BMFontUtil
#include <flixel/graphics/frames/bmfont/BMFontUtil.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_haxe_io_BytesInput
#include <haxe/io/BytesInput.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_AttribAccess_Impl_
#include <haxe/xml/_Access/AttribAccess_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_HasAttribAccess_Impl_
#include <haxe/xml/_Access/HasAttribAccess_Impl_.h>
#endif
#ifndef INCLUDED_haxe_xml__Access_NodeListAccess_Impl_
#include <haxe/xml/_Access/NodeListAccess_Impl_.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_89999802178ac74a_18_new,"flixel.graphics.frames.bmfont.BMFontChar","new",0x480f5c1f,"flixel.graphics.frames.bmfont.BMFontChar.new","flixel/graphics/frames/bmfont/BMFontChar.hx",18,0x4aed9a31)
HX_LOCAL_STACK_FRAME(_hx_pos_89999802178ac74a_34_fromXml,"flixel.graphics.frames.bmfont.BMFontChar","fromXml",0x456c15cc,"flixel.graphics.frames.bmfont.BMFontChar.fromXml","flixel/graphics/frames/bmfont/BMFontChar.hx",34,0x4aed9a31)
HX_LOCAL_STACK_FRAME(_hx_pos_89999802178ac74a_50_listFromXml,"flixel.graphics.frames.bmfont.BMFontChar","listFromXml",0x7fe1948e,"flixel.graphics.frames.bmfont.BMFontChar.listFromXml","flixel/graphics/frames/bmfont/BMFontChar.hx",50,0x4aed9a31)
HX_LOCAL_STACK_FRAME(_hx_pos_89999802178ac74a_72_fromText,"flixel.graphics.frames.bmfont.BMFontChar","fromText",0x767c1b18,"flixel.graphics.frames.bmfont.BMFontChar.fromText","flixel/graphics/frames/bmfont/BMFontChar.hx",72,0x4aed9a31)
HX_LOCAL_STACK_FRAME(_hx_pos_89999802178ac74a_56_fromText,"flixel.graphics.frames.bmfont.BMFontChar","fromText",0x767c1b18,"flixel.graphics.frames.bmfont.BMFontChar.fromText","flixel/graphics/frames/bmfont/BMFontChar.hx",56,0x4aed9a31)
static const int _hx_array_data_d8d160ad_7[] = {
	(int)-1,
};
static const int _hx_array_data_d8d160ad_8[] = {
	(int)-1,
};
static const int _hx_array_data_d8d160ad_9[] = {
	(int)-1,
};
static const int _hx_array_data_d8d160ad_10[] = {
	(int)0,
};
static const int _hx_array_data_d8d160ad_11[] = {
	(int)0,
};
static const int _hx_array_data_d8d160ad_12[] = {
	(int)0,
};
static const int _hx_array_data_d8d160ad_13[] = {
	(int)0,
};
static const int _hx_array_data_d8d160ad_14[] = {
	(int)0,
};
static const int _hx_array_data_d8d160ad_15[] = {
	(int)-1,
};
static const int _hx_array_data_d8d160ad_16[] = {
	(int)-1,
};
HX_LOCAL_STACK_FRAME(_hx_pos_89999802178ac74a_107_listFromBytes,"flixel.graphics.frames.bmfont.BMFontChar","listFromBytes",0xc7fe8ae2,"flixel.graphics.frames.bmfont.BMFontChar.listFromBytes","flixel/graphics/frames/bmfont/BMFontChar.hx",107,0x4aed9a31)
namespace flixel{
namespace graphics{
namespace frames{
namespace bmfont{

void BMFontChar_obj::__construct(int id,int x,int y,int width,int height,int xoffset,int yoffset,int xadvance,int page,int chnl,::String letter){
            	HX_STACKFRAME(&_hx_pos_89999802178ac74a_18_new)
HXLINE(  30)		this->letter = null();
HXLINE(  18)		this->id = id;
HXDLIN(  18)		this->x = x;
HXDLIN(  18)		this->y = y;
HXDLIN(  18)		this->width = width;
HXDLIN(  18)		this->height = height;
HXDLIN(  18)		this->xoffset = xoffset;
HXDLIN(  18)		this->yoffset = yoffset;
HXDLIN(  18)		this->xadvance = xadvance;
HXDLIN(  18)		this->page = page;
HXDLIN(  18)		this->chnl = chnl;
HXDLIN(  18)		if (::hx::IsNotNull( letter )) {
HXDLIN(  18)			this->letter = letter;
            		}
            	}

Dynamic BMFontChar_obj::__CreateEmpty() { return new BMFontChar_obj; }

void *BMFontChar_obj::_hx_vtable = 0;

Dynamic BMFontChar_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< BMFontChar_obj > _hx_result = new BMFontChar_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5],inArgs[6],inArgs[7],inArgs[8],inArgs[9],inArgs[10]);
	return _hx_result;
}

bool BMFontChar_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7266f7bb;
}

 ::flixel::graphics::frames::bmfont::BMFontChar BMFontChar_obj::fromXml( ::Xml charNode){
            	HX_GC_STACKFRAME(&_hx_pos_89999802178ac74a_34_fromXml)
HXLINE(  35)		 ::Dynamic _g = ::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(charNode,HX_("id",db,5b,00,00)));
HXLINE(  36)		 ::Dynamic _g1 = ::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(charNode,HX_("x",78,00,00,00)));
HXLINE(  37)		 ::Dynamic _g2 = ::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(charNode,HX_("y",79,00,00,00)));
HXLINE(  38)		 ::Dynamic _g3 = ::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(charNode,HX_("width",06,b6,62,ca)));
HXLINE(  39)		 ::Dynamic _g4 = ::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(charNode,HX_("height",e7,07,4c,02)));
HXLINE(  40)		int _g5;
HXDLIN(  40)		if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(charNode,HX_("xoffset",0b,42,4f,de))) {
HXLINE(  40)			_g5 = ( (int)(::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(charNode,HX_("xoffset",0b,42,4f,de)))) );
            		}
            		else {
HXLINE(  40)			_g5 = 0;
            		}
HXLINE(  41)		int _g6;
HXDLIN(  41)		if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(charNode,HX_("yoffset",cc,b8,e4,07))) {
HXLINE(  41)			_g6 = ( (int)(::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(charNode,HX_("yoffset",cc,b8,e4,07)))) );
            		}
            		else {
HXLINE(  41)			_g6 = 0;
            		}
HXLINE(  42)		int _g7;
HXDLIN(  42)		if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(charNode,HX_("xadvance",0a,87,b1,be))) {
HXLINE(  42)			_g7 = ( (int)(::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(charNode,HX_("xadvance",0a,87,b1,be)))) );
            		}
            		else {
HXLINE(  42)			_g7 = 0;
            		}
HXLINE(  43)		 ::Dynamic _g8 = ::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(charNode,HX_("page",4f,da,51,4a)));
HXLINE(  44)		 ::Dynamic _g9 = ::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(charNode,HX_("chnl",23,6a,bf,41)));
HXLINE(  45)		::String _hx_tmp;
HXDLIN(  45)		if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(charNode,HX_("letter",e6,ac,08,a3))) {
HXLINE(  45)			_hx_tmp = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(charNode,HX_("letter",e6,ac,08,a3));
            		}
            		else {
HXLINE(  45)			_hx_tmp = null();
            		}
HXLINE(  34)		return  ::flixel::graphics::frames::bmfont::BMFontChar_obj::__alloc( HX_CTX ,( (int)(_g) ),( (int)(_g1) ),( (int)(_g2) ),( (int)(_g3) ),( (int)(_g4) ),_g5,_g6,_g7,( (int)(_g8) ),( (int)(_g9) ),_hx_tmp);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFontChar_obj,fromXml,return )

::Array< ::Dynamic> BMFontChar_obj::listFromXml( ::Xml charsNode){
            	HX_GC_STACKFRAME(&_hx_pos_89999802178ac74a_50_listFromXml)
HXLINE(  51)		::Array< ::Dynamic> chars = ::haxe::xml::_Access::NodeListAccess_Impl__obj::resolve(charsNode,HX_("char",d6,5e,bf,41));
HXLINE(  52)		::Array< ::Dynamic> _g = ::Array_obj< ::Dynamic>::__new(0);
HXDLIN(  52)		{
HXLINE(  52)			int _g1 = 0;
HXDLIN(  52)			while((_g1 < chars->length)){
HXLINE(  52)				 ::Xml _hx_char = chars->__get(_g1).StaticCast<  ::Xml >();
HXDLIN(  52)				_g1 = (_g1 + 1);
HXDLIN(  52)				 ::Dynamic _g2 = ::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(_hx_char,HX_("id",db,5b,00,00)));
HXDLIN(  52)				 ::Dynamic _g3 = ::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(_hx_char,HX_("x",78,00,00,00)));
HXDLIN(  52)				 ::Dynamic _g4 = ::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(_hx_char,HX_("y",79,00,00,00)));
HXDLIN(  52)				 ::Dynamic _g5 = ::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(_hx_char,HX_("width",06,b6,62,ca)));
HXDLIN(  52)				 ::Dynamic _g6 = ::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(_hx_char,HX_("height",e7,07,4c,02)));
HXDLIN(  52)				int _g7;
HXDLIN(  52)				if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(_hx_char,HX_("xoffset",0b,42,4f,de))) {
HXLINE(  52)					_g7 = ( (int)(::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(_hx_char,HX_("xoffset",0b,42,4f,de)))) );
            				}
            				else {
HXLINE(  52)					_g7 = 0;
            				}
HXDLIN(  52)				int _g8;
HXDLIN(  52)				if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(_hx_char,HX_("yoffset",cc,b8,e4,07))) {
HXLINE(  52)					_g8 = ( (int)(::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(_hx_char,HX_("yoffset",cc,b8,e4,07)))) );
            				}
            				else {
HXLINE(  52)					_g8 = 0;
            				}
HXDLIN(  52)				int _g9;
HXDLIN(  52)				if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(_hx_char,HX_("xadvance",0a,87,b1,be))) {
HXLINE(  52)					_g9 = ( (int)(::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(_hx_char,HX_("xadvance",0a,87,b1,be)))) );
            				}
            				else {
HXLINE(  52)					_g9 = 0;
            				}
HXDLIN(  52)				 ::Dynamic _g10 = ::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(_hx_char,HX_("page",4f,da,51,4a)));
HXDLIN(  52)				 ::Dynamic _g11 = ::Std_obj::parseInt(::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(_hx_char,HX_("chnl",23,6a,bf,41)));
HXDLIN(  52)				::String _hx_tmp;
HXDLIN(  52)				if (::haxe::xml::_Access::HasAttribAccess_Impl__obj::resolve(_hx_char,HX_("letter",e6,ac,08,a3))) {
HXLINE(  52)					_hx_tmp = ::haxe::xml::_Access::AttribAccess_Impl__obj::resolve(_hx_char,HX_("letter",e6,ac,08,a3));
            				}
            				else {
HXLINE(  52)					_hx_tmp = null();
            				}
HXDLIN(  52)				_g->push( ::flixel::graphics::frames::bmfont::BMFontChar_obj::__alloc( HX_CTX ,( (int)(_g2) ),( (int)(_g3) ),( (int)(_g4) ),( (int)(_g5) ),( (int)(_g6) ),_g7,_g8,_g9,( (int)(_g10) ),( (int)(_g11) ),_hx_tmp));
            			}
            		}
HXDLIN(  52)		return _g;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFontChar_obj,listFromXml,return )

 ::flixel::graphics::frames::bmfont::BMFontChar BMFontChar_obj::fromText(::String kerningText){
            		HX_BEGIN_LOCAL_FUNC_S11(::hx::LocalFunc,_hx_Closure_0,::Array< ::String >,letter,::Array< int >,id,::Array< int >,yoffset,::Array< int >,page,::Array< int >,height,::Array< int >,y,::Array< int >,xoffset,::Array< int >,xadvance,::Array< int >,x,::Array< int >,chnl,::Array< int >,width) HXARGC(2)
            		void _hx_run(::String key,::String value){
            			HX_STACKFRAME(&_hx_pos_89999802178ac74a_72_fromText)
HXLINE(  72)			::String _hx_switch_0 = key;
            			if (  (_hx_switch_0==HX_("chnl",23,6a,bf,41)) ){
HXLINE(  83)				chnl[0] = ( (int)(::Std_obj::parseInt(value)) );
HXDLIN(  83)				goto _hx_goto_4;
            			}
            			if (  (_hx_switch_0==HX_("height",e7,07,4c,02)) ){
HXLINE(  78)				height[0] = ( (int)(::Std_obj::parseInt(value)) );
HXDLIN(  78)				goto _hx_goto_4;
            			}
            			if (  (_hx_switch_0==HX_("id",db,5b,00,00)) ){
HXLINE(  74)				id[0] = ( (int)(::Std_obj::parseInt(value)) );
HXDLIN(  74)				goto _hx_goto_4;
            			}
            			if (  (_hx_switch_0==HX_("letter",e6,ac,08,a3)) ){
HXLINE(  84)				letter[0] = value;
HXDLIN(  84)				goto _hx_goto_4;
            			}
            			if (  (_hx_switch_0==HX_("page",4f,da,51,4a)) ){
HXLINE(  82)				page[0] = ( (int)(::Std_obj::parseInt(value)) );
HXDLIN(  82)				goto _hx_goto_4;
            			}
            			if (  (_hx_switch_0==HX_("width",06,b6,62,ca)) ){
HXLINE(  77)				width[0] = ( (int)(::Std_obj::parseInt(value)) );
HXDLIN(  77)				goto _hx_goto_4;
            			}
            			if (  (_hx_switch_0==HX_("x",78,00,00,00)) ){
HXLINE(  75)				x[0] = ( (int)(::Std_obj::parseInt(value)) );
HXDLIN(  75)				goto _hx_goto_4;
            			}
            			if (  (_hx_switch_0==HX_("xadvance",0a,87,b1,be)) ){
HXLINE(  81)				xadvance[0] = ( (int)(::Std_obj::parseInt(value)) );
HXDLIN(  81)				goto _hx_goto_4;
            			}
            			if (  (_hx_switch_0==HX_("xoffset",0b,42,4f,de)) ){
HXLINE(  79)				xoffset[0] = ( (int)(::Std_obj::parseInt(value)) );
HXDLIN(  79)				goto _hx_goto_4;
            			}
            			if (  (_hx_switch_0==HX_("y",79,00,00,00)) ){
HXLINE(  76)				y[0] = ( (int)(::Std_obj::parseInt(value)) );
HXDLIN(  76)				goto _hx_goto_4;
            			}
            			if (  (_hx_switch_0==HX_("yoffset",cc,b8,e4,07)) ){
HXLINE(  80)				yoffset[0] = ( (int)(::Std_obj::parseInt(value)) );
HXDLIN(  80)				goto _hx_goto_4;
            			}
            			/* default */{
HXLINE(  85)				::flixel::FlxG_obj::log->advanced((((HX_("Unexpected font char attribute: ",7a,69,14,e4) + key) + HX_("=",3d,00,00,00)) + value),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
            			}
            			_hx_goto_4:;
            		}
            		HX_END_LOCAL_FUNC2((void))

            	HX_GC_STACKFRAME(&_hx_pos_89999802178ac74a_56_fromText)
HXLINE(  57)		::Array< int > id = ::Array_obj< int >::fromData( _hx_array_data_d8d160ad_7,1);
HXLINE(  58)		::Array< int > x = ::Array_obj< int >::fromData( _hx_array_data_d8d160ad_8,1);
HXLINE(  59)		::Array< int > y = ::Array_obj< int >::fromData( _hx_array_data_d8d160ad_9,1);
HXLINE(  60)		::Array< int > width = ::Array_obj< int >::fromData( _hx_array_data_d8d160ad_10,1);
HXLINE(  61)		::Array< int > height = ::Array_obj< int >::fromData( _hx_array_data_d8d160ad_11,1);
HXLINE(  62)		::Array< int > xoffset = ::Array_obj< int >::fromData( _hx_array_data_d8d160ad_12,1);
HXLINE(  63)		::Array< int > yoffset = ::Array_obj< int >::fromData( _hx_array_data_d8d160ad_13,1);
HXLINE(  64)		::Array< int > xadvance = ::Array_obj< int >::fromData( _hx_array_data_d8d160ad_14,1);
HXLINE(  65)		::Array< int > page = ::Array_obj< int >::fromData( _hx_array_data_d8d160ad_15,1);
HXLINE(  66)		::Array< int > chnl = ::Array_obj< int >::fromData( _hx_array_data_d8d160ad_16,1);
HXLINE(  67)		::Array< ::String > letter = ::Array_obj< ::String >::__new(1)->init(0,null());
HXLINE(  69)		::flixel::graphics::frames::bmfont::BMFontUtil_obj::forEachAttribute(kerningText, ::Dynamic(new _hx_Closure_0(letter,id,yoffset,page,height,y,xoffset,xadvance,x,chnl,width)));
HXLINE(  90)		return  ::flixel::graphics::frames::bmfont::BMFontChar_obj::__alloc( HX_CTX ,id->__get(0),x->__get(0),y->__get(0),width->__get(0),height->__get(0),xoffset->__get(0),yoffset->__get(0),xadvance->__get(0),page->__get(0),chnl->__get(0),letter->__get(0));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFontChar_obj,fromText,return )

::Array< ::Dynamic> BMFontChar_obj::listFromBytes( ::haxe::io::BytesInput bytes){
            	HX_GC_STACKFRAME(&_hx_pos_89999802178ac74a_107_listFromBytes)
HXLINE( 108)		int blockSize = bytes->readInt32();
HXLINE( 109)		::Array< ::Dynamic> chars = ::Array_obj< ::Dynamic>::__new();
HXLINE( 110)		while((blockSize > 0)){
HXLINE( 113)			int _g = bytes->readInt32();
HXLINE( 114)			int _g1 = bytes->readInt16();
HXLINE( 115)			int _g2 = bytes->readInt16();
HXLINE( 116)			int _g3 = bytes->readInt16();
HXLINE( 117)			int _g4 = bytes->readInt16();
HXLINE( 118)			int _g5 = bytes->readInt16();
HXLINE( 119)			int _g6 = bytes->readInt16();
HXLINE( 120)			int _g7 = bytes->readInt16();
HXLINE( 121)			int _g8 = bytes->readByte();
HXLINE( 112)			 ::flixel::graphics::frames::bmfont::BMFontChar _hx_char =  ::flixel::graphics::frames::bmfont::BMFontChar_obj::__alloc( HX_CTX ,_g,_g1,_g2,_g3,_g4,_g5,_g6,_g7,_g8,bytes->readByte(),null());
HXLINE( 124)			chars->push(_hx_char);
HXLINE( 125)			blockSize = (blockSize - 20);
            		}
HXLINE( 127)		return chars;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(BMFontChar_obj,listFromBytes,return )


BMFontChar_obj::BMFontChar_obj()
{
}

void BMFontChar_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(BMFontChar);
	HX_MARK_MEMBER_NAME(id,"id");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(xoffset,"xoffset");
	HX_MARK_MEMBER_NAME(yoffset,"yoffset");
	HX_MARK_MEMBER_NAME(xadvance,"xadvance");
	HX_MARK_MEMBER_NAME(page,"page");
	HX_MARK_MEMBER_NAME(chnl,"chnl");
	HX_MARK_MEMBER_NAME(letter,"letter");
	HX_MARK_END_CLASS();
}

void BMFontChar_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(id,"id");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(xoffset,"xoffset");
	HX_VISIT_MEMBER_NAME(yoffset,"yoffset");
	HX_VISIT_MEMBER_NAME(xadvance,"xadvance");
	HX_VISIT_MEMBER_NAME(page,"page");
	HX_VISIT_MEMBER_NAME(chnl,"chnl");
	HX_VISIT_MEMBER_NAME(letter,"letter");
}

::hx::Val BMFontChar_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"page") ) { return ::hx::Val( page ); }
		if (HX_FIELD_EQ(inName,"chnl") ) { return ::hx::Val( chnl ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { return ::hx::Val( width ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return ::hx::Val( height ); }
		if (HX_FIELD_EQ(inName,"letter") ) { return ::hx::Val( letter ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"xoffset") ) { return ::hx::Val( xoffset ); }
		if (HX_FIELD_EQ(inName,"yoffset") ) { return ::hx::Val( yoffset ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"xadvance") ) { return ::hx::Val( xadvance ); }
	}
	return super::__Field(inName,inCallProp);
}

bool BMFontChar_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"fromXml") ) { outValue = fromXml_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"fromText") ) { outValue = fromText_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"listFromXml") ) { outValue = listFromXml_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"listFromBytes") ) { outValue = listFromBytes_dyn(); return true; }
	}
	return false;
}

::hx::Val BMFontChar_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"page") ) { page=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"chnl") ) { chnl=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"letter") ) { letter=inValue.Cast< ::String >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"xoffset") ) { xoffset=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"yoffset") ) { yoffset=inValue.Cast< int >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"xadvance") ) { xadvance=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void BMFontChar_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	outFields->push(HX_("width",06,b6,62,ca));
	outFields->push(HX_("height",e7,07,4c,02));
	outFields->push(HX_("xoffset",0b,42,4f,de));
	outFields->push(HX_("yoffset",cc,b8,e4,07));
	outFields->push(HX_("xadvance",0a,87,b1,be));
	outFields->push(HX_("page",4f,da,51,4a));
	outFields->push(HX_("chnl",23,6a,bf,41));
	outFields->push(HX_("letter",e6,ac,08,a3));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo BMFontChar_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(BMFontChar_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsInt,(int)offsetof(BMFontChar_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsInt,(int)offsetof(BMFontChar_obj,y),HX_("y",79,00,00,00)},
	{::hx::fsInt,(int)offsetof(BMFontChar_obj,width),HX_("width",06,b6,62,ca)},
	{::hx::fsInt,(int)offsetof(BMFontChar_obj,height),HX_("height",e7,07,4c,02)},
	{::hx::fsInt,(int)offsetof(BMFontChar_obj,xoffset),HX_("xoffset",0b,42,4f,de)},
	{::hx::fsInt,(int)offsetof(BMFontChar_obj,yoffset),HX_("yoffset",cc,b8,e4,07)},
	{::hx::fsInt,(int)offsetof(BMFontChar_obj,xadvance),HX_("xadvance",0a,87,b1,be)},
	{::hx::fsInt,(int)offsetof(BMFontChar_obj,page),HX_("page",4f,da,51,4a)},
	{::hx::fsInt,(int)offsetof(BMFontChar_obj,chnl),HX_("chnl",23,6a,bf,41)},
	{::hx::fsString,(int)offsetof(BMFontChar_obj,letter),HX_("letter",e6,ac,08,a3)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *BMFontChar_obj_sStaticStorageInfo = 0;
#endif

static ::String BMFontChar_obj_sMemberFields[] = {
	HX_("id",db,5b,00,00),
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("width",06,b6,62,ca),
	HX_("height",e7,07,4c,02),
	HX_("xoffset",0b,42,4f,de),
	HX_("yoffset",cc,b8,e4,07),
	HX_("xadvance",0a,87,b1,be),
	HX_("page",4f,da,51,4a),
	HX_("chnl",23,6a,bf,41),
	HX_("letter",e6,ac,08,a3),
	::String(null()) };

::hx::Class BMFontChar_obj::__mClass;

static ::String BMFontChar_obj_sStaticFields[] = {
	HX_("fromXml",8d,3e,06,58),
	HX_("listFromXml",cf,b1,05,0f),
	HX_("fromText",37,9b,c5,aa),
	HX_("listFromBytes",63,3a,55,7e),
	::String(null())
};

void BMFontChar_obj::__register()
{
	BMFontChar_obj _hx_dummy;
	BMFontChar_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.graphics.frames.bmfont.BMFontChar",ad,60,d1,d8);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &BMFontChar_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(BMFontChar_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(BMFontChar_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< BMFontChar_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = BMFontChar_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = BMFontChar_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames
} // end namespace bmfont
