#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_graphics_FlxGraphic
#include <flixel/graphics/FlxGraphic.h>
#endif
#ifndef INCLUDED_flixel_graphics_frames_FlxFrame
#include <flixel/graphics/frames/FlxFrame.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxMatrix
#include <flixel/math/FlxMatrix.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxPool
#include <flixel/util/FlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_FlxStringUtil
#include <flixel/util/FlxStringUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPool
#include <flixel/util/IFlxPool.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_flixel_util_LabelValuePair
#include <flixel/util/LabelValuePair.h>
#endif
#ifndef INCLUDED_haxe_ds_ArraySort
#include <haxe/ds/ArraySort.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Point
#include <openfl/geom/Point.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5df8bdd839d6a258_112_new,"flixel.graphics.frames.FlxFrame","new",0x06ad24e4,"flixel.graphics.frames.FlxFrame.new","flixel/graphics/frames/FlxFrame.hx",112,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_132_cacheFrameMatrix,"flixel.graphics.frames.FlxFrame","cacheFrameMatrix",0xffbbac28,"flixel.graphics.frames.FlxFrame.cacheFrameMatrix","flixel/graphics/frames/FlxFrame.hx",132,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_162_prepareBlitMatrix,"flixel.graphics.frames.FlxFrame","prepareBlitMatrix",0xbf3c9041,"flixel.graphics.frames.FlxFrame.prepareBlitMatrix","flixel/graphics/frames/FlxFrame.hx",162,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_194_rotateAndFlip,"flixel.graphics.frames.FlxFrame","rotateAndFlip",0x835ac58d,"flixel.graphics.frames.FlxFrame.rotateAndFlip","flixel/graphics/frames/FlxFrame.hx",194,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_243_prepareTransformedBlitMatrix,"flixel.graphics.frames.FlxFrame","prepareTransformedBlitMatrix",0xc5ea2af6,"flixel.graphics.frames.FlxFrame.prepareTransformedBlitMatrix","flixel/graphics/frames/FlxFrame.hx",243,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_258_prepareMatrix,"flixel.graphics.frames.FlxFrame","prepareMatrix",0xbf883cac,"flixel.graphics.frames.FlxFrame.prepareMatrix","flixel/graphics/frames/FlxFrame.hx",258,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_282_fillBlitMatrix,"flixel.graphics.frames.FlxFrame","fillBlitMatrix",0xa3605eb5,"flixel.graphics.frames.FlxFrame.fillBlitMatrix","flixel/graphics/frames/FlxFrame.hx",282,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_305_paint,"flixel.graphics.frames.FlxFrame","paint",0x0c093522,"flixel.graphics.frames.FlxFrame.paint","flixel/graphics/frames/FlxFrame.hx",305,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_348_paintRotatedAndFlipped,"flixel.graphics.frames.FlxFrame","paintRotatedAndFlipped",0x8f0fb1b2,"flixel.graphics.frames.FlxFrame.paintRotatedAndFlipped","flixel/graphics/frames/FlxFrame.hx",348,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_383_checkInputBitmap,"flixel.graphics.frames.FlxFrame","checkInputBitmap",0x11e1b8ad,"flixel.graphics.frames.FlxFrame.checkInputBitmap","flixel/graphics/frames/FlxFrame.hx",383,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_417_getDrawFrameRect,"flixel.graphics.frames.FlxFrame","getDrawFrameRect",0x7930f1d3,"flixel.graphics.frames.FlxFrame.getDrawFrameRect","flixel/graphics/frames/FlxFrame.hx",417,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_438_subFrameTo,"flixel.graphics.frames.FlxFrame","subFrameTo",0x37199964,"flixel.graphics.frames.FlxFrame.subFrameTo","flixel/graphics/frames/FlxFrame.hx",438,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_526_setBorderTo,"flixel.graphics.frames.FlxFrame","setBorderTo",0x0ba0ebcd,"flixel.graphics.frames.FlxFrame.setBorderTo","flixel/graphics/frames/FlxFrame.hx",526,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_543_clipTo,"flixel.graphics.frames.FlxFrame","clipTo",0x9ecb6267,"flixel.graphics.frames.FlxFrame.clipTo","flixel/graphics/frames/FlxFrame.hx",543,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_628_copyTo,"flixel.graphics.frames.FlxFrame","copyTo",0x5da6728c,"flixel.graphics.frames.FlxFrame.copyTo","flixel/graphics/frames/FlxFrame.hx",628,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_652_destroy,"flixel.graphics.frames.FlxFrame","destroy",0x74fe137e,"flixel.graphics.frames.FlxFrame.destroy","flixel/graphics/frames/FlxFrame.hx",652,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_665_toString,"flixel.graphics.frames.FlxFrame","toString",0x50e09da8,"flixel.graphics.frames.FlxFrame.toString","flixel/graphics/frames/FlxFrame.hx",665,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_669_set_frame,"flixel.graphics.frames.FlxFrame","set_frame",0x789f5014,"flixel.graphics.frames.FlxFrame.set_frame","flixel/graphics/frames/FlxFrame.hx",669,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_43_sort,"flixel.graphics.frames.FlxFrame","sort",0xd428c65a,"flixel.graphics.frames.FlxFrame.sort","flixel/graphics/frames/FlxFrame.hx",43,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_47_sortByName,"flixel.graphics.frames.FlxFrame","sortByName",0xdd6fa5bc,"flixel.graphics.frames.FlxFrame.sortByName","flixel/graphics/frames/FlxFrame.hx",47,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_24_boot,"flixel.graphics.frames.FlxFrame","boot",0xc8ec232e,"flixel.graphics.frames.FlxFrame.boot","flixel/graphics/frames/FlxFrame.hx",24,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_29_boot,"flixel.graphics.frames.FlxFrame","boot",0xc8ec232e,"flixel.graphics.frames.FlxFrame.boot","flixel/graphics/frames/FlxFrame.hx",29,0x6c7f608b)
HX_LOCAL_STACK_FRAME(_hx_pos_5df8bdd839d6a258_34_boot,"flixel.graphics.frames.FlxFrame","boot",0xc8ec232e,"flixel.graphics.frames.FlxFrame.boot","flixel/graphics/frames/FlxFrame.hx",34,0x6c7f608b)
namespace flixel{
namespace graphics{
namespace frames{

void FlxFrame_obj::__construct( ::flixel::graphics::FlxGraphic parent,::hx::Null< int >  __o_angle,::hx::Null< bool >  __o_flipX,::hx::Null< bool >  __o_flipY,::hx::Null< Float >  __o_duration){
            		int angle = __o_angle.Default(0);
            		bool flipX = __o_flipX.Default(false);
            		bool flipY = __o_flipY.Default(false);
            		Float duration = __o_duration.Default(((Float)0.0));
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_112_new)
HXLINE( 113)		this->parent = parent;
HXLINE( 114)		this->angle = angle;
HXLINE( 115)		this->flipX = flipX;
HXLINE( 116)		this->flipY = flipY;
HXLINE( 117)		this->duration = duration;
HXLINE( 119)		this->type = 0;
HXLINE( 121)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 121)		point->_inPool = false;
HXDLIN( 121)		this->sourceSize = point;
HXLINE( 122)		 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(( (Float)(0) ),( (Float)(0) ));
HXDLIN( 122)		point1->_inPool = false;
HXDLIN( 122)		this->offset = point1;
HXLINE( 124)		::Array< Float > this1 = ::Array_obj< Float >::__new(6);
HXDLIN( 124)		this->blitMatrix = this1;
HXLINE( 125)		if (::flixel::FlxG_obj::renderTile) {
HXLINE( 126)			::Array< Float > this1 = ::Array_obj< Float >::__new(6);
HXDLIN( 126)			this->tileMatrix = this1;
            		}
            	}

Dynamic FlxFrame_obj::__CreateEmpty() { return new FlxFrame_obj; }

void *FlxFrame_obj::_hx_vtable = 0;

Dynamic FlxFrame_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxFrame_obj > _hx_result = new FlxFrame_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4]);
	return _hx_result;
}

bool FlxFrame_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x3adf0488;
}

static ::flixel::util::IFlxDestroyable_obj _hx_flixel_graphics_frames_FlxFrame__hx_flixel_util_IFlxDestroyable= {
	( void (::hx::Object::*)())&::flixel::graphics::frames::FlxFrame_obj::destroy,
};

void *FlxFrame_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xd4fe2fcd: return &_hx_flixel_graphics_frames_FlxFrame__hx_flixel_util_IFlxDestroyable;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

void FlxFrame_obj::cacheFrameMatrix(){
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_132_cacheFrameMatrix)
HXLINE( 133)		{
HXLINE( 133)			 ::flixel::math::FlxMatrix mat = ::flixel::graphics::frames::FlxFrame_obj::_matrix;
HXDLIN( 133)			mat->identity();
HXDLIN( 133)			mat->translate(-(this->frame->x),-(this->frame->y));
HXDLIN( 133)			if ((this->angle == 90)) {
HXLINE( 133)				mat->setTo(-(mat->b),mat->a,-(mat->d),mat->c,-(mat->ty),mat->tx);
HXDLIN( 133)				mat->translate(this->frame->height,( (Float)(0) ));
            			}
            			else {
HXLINE( 133)				if ((this->angle == -90)) {
HXLINE( 133)					mat->setTo(mat->b,-(mat->a),mat->d,-(mat->c),mat->ty,-(mat->tx));
HXDLIN( 133)					mat->translate(( (Float)(0) ),this->frame->width);
            				}
            			}
HXDLIN( 133)			mat->translate(this->offset->x,this->offset->y);
            		}
HXLINE( 134)		this->blitMatrix->__unsafe_set(0,::flixel::graphics::frames::FlxFrame_obj::_matrix->a);
HXLINE( 135)		this->blitMatrix->__unsafe_set(1,::flixel::graphics::frames::FlxFrame_obj::_matrix->b);
HXLINE( 136)		this->blitMatrix->__unsafe_set(2,::flixel::graphics::frames::FlxFrame_obj::_matrix->c);
HXLINE( 137)		this->blitMatrix->__unsafe_set(3,::flixel::graphics::frames::FlxFrame_obj::_matrix->d);
HXLINE( 138)		this->blitMatrix->__unsafe_set(4,::flixel::graphics::frames::FlxFrame_obj::_matrix->tx);
HXLINE( 139)		this->blitMatrix->__unsafe_set(5,::flixel::graphics::frames::FlxFrame_obj::_matrix->ty);
HXLINE( 141)		if (::flixel::FlxG_obj::renderTile) {
HXLINE( 143)			{
HXLINE( 143)				 ::flixel::math::FlxMatrix mat = ::flixel::graphics::frames::FlxFrame_obj::_matrix;
HXDLIN( 143)				mat->identity();
HXDLIN( 143)				if ((this->angle == 90)) {
HXLINE( 143)					mat->setTo(-(mat->b),mat->a,-(mat->d),mat->c,-(mat->ty),mat->tx);
HXDLIN( 143)					mat->translate(this->frame->height,( (Float)(0) ));
            				}
            				else {
HXLINE( 143)					if ((this->angle == -90)) {
HXLINE( 143)						mat->setTo(mat->b,-(mat->a),mat->d,-(mat->c),mat->ty,-(mat->tx));
HXDLIN( 143)						mat->translate(( (Float)(0) ),this->frame->width);
            					}
            				}
HXDLIN( 143)				mat->translate(this->offset->x,this->offset->y);
            			}
HXLINE( 144)			this->tileMatrix->__unsafe_set(0,::flixel::graphics::frames::FlxFrame_obj::_matrix->a);
HXLINE( 145)			this->tileMatrix->__unsafe_set(1,::flixel::graphics::frames::FlxFrame_obj::_matrix->b);
HXLINE( 146)			this->tileMatrix->__unsafe_set(2,::flixel::graphics::frames::FlxFrame_obj::_matrix->c);
HXLINE( 147)			this->tileMatrix->__unsafe_set(3,::flixel::graphics::frames::FlxFrame_obj::_matrix->d);
HXLINE( 148)			this->tileMatrix->__unsafe_set(4,::flixel::graphics::frames::FlxFrame_obj::_matrix->tx);
HXLINE( 149)			this->tileMatrix->__unsafe_set(5,::flixel::graphics::frames::FlxFrame_obj::_matrix->ty);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxFrame_obj,cacheFrameMatrix,(void))

 ::flixel::math::FlxMatrix FlxFrame_obj::prepareBlitMatrix( ::flixel::math::FlxMatrix mat,::hx::Null< bool >  __o_blit){
            		bool blit = __o_blit.Default(true);
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_162_prepareBlitMatrix)
HXLINE( 163)		mat->identity();
HXLINE( 165)		if (blit) {
HXLINE( 166)			mat->translate(-(this->frame->x),-(this->frame->y));
            		}
HXLINE( 168)		if ((this->angle == 90)) {
HXLINE( 170)			mat->setTo(-(mat->b),mat->a,-(mat->d),mat->c,-(mat->ty),mat->tx);
HXLINE( 171)			mat->translate(this->frame->height,( (Float)(0) ));
            		}
            		else {
HXLINE( 173)			if ((this->angle == -90)) {
HXLINE( 175)				mat->setTo(mat->b,-(mat->a),mat->d,-(mat->c),mat->ty,-(mat->tx));
HXLINE( 176)				mat->translate(( (Float)(0) ),this->frame->width);
            			}
            		}
HXLINE( 179)		mat->translate(this->offset->x,this->offset->y);
HXLINE( 180)		return mat;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxFrame_obj,prepareBlitMatrix,return )

 ::flixel::math::FlxMatrix FlxFrame_obj::rotateAndFlip( ::flixel::math::FlxMatrix mat,::hx::Null< int >  __o_rotation,::hx::Null< bool >  __o_flipX,::hx::Null< bool >  __o_flipY){
            		int rotation = __o_rotation.Default(0);
            		bool flipX = __o_flipX.Default(false);
            		bool flipY = __o_flipY.Default(false);
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_194_rotateAndFlip)
HXLINE( 195)		int w = ::Std_obj::_hx_int(this->sourceSize->x);
HXLINE( 196)		int h = ::Std_obj::_hx_int(this->sourceSize->y);
HXLINE( 199)		if ((rotation != 0)) {
HXLINE( 201)			int t = w;
HXLINE( 202)			w = h;
HXLINE( 203)			h = t;
HXLINE( 205)			if ((rotation == 90)) {
HXLINE( 207)				mat->setTo(-(mat->b),mat->a,-(mat->d),mat->c,-(mat->ty),mat->tx);
HXLINE( 208)				mat->translate(this->sourceSize->y,( (Float)(0) ));
            			}
            			else {
HXLINE( 210)				bool _hx_tmp;
HXDLIN( 210)				if ((rotation != -90)) {
HXLINE( 210)					_hx_tmp = (rotation == -90);
            				}
            				else {
HXLINE( 210)					_hx_tmp = true;
            				}
HXDLIN( 210)				if (_hx_tmp) {
HXLINE( 212)					mat->setTo(mat->b,-(mat->a),mat->d,-(mat->c),mat->ty,-(mat->tx));
HXLINE( 213)					mat->translate(( (Float)(0) ),this->sourceSize->x);
            				}
            			}
            		}
HXLINE( 218)		if (flipX) {
HXLINE( 220)			mat->scale(( (Float)(-1) ),( (Float)(1) ));
HXLINE( 221)			mat->translate(( (Float)(w) ),( (Float)(0) ));
            		}
HXLINE( 224)		if (flipY) {
HXLINE( 226)			mat->scale(( (Float)(1) ),( (Float)(-1) ));
HXLINE( 227)			mat->translate(( (Float)(0) ),( (Float)(h) ));
            		}
HXLINE( 230)		return mat;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxFrame_obj,rotateAndFlip,return )

 ::flixel::math::FlxMatrix FlxFrame_obj::prepareTransformedBlitMatrix( ::flixel::math::FlxMatrix mat,::hx::Null< int >  __o_rotation,::hx::Null< bool >  __o_flipX,::hx::Null< bool >  __o_flipY){
            		int rotation = __o_rotation.Default(0);
            		bool flipX = __o_flipX.Default(false);
            		bool flipY = __o_flipY.Default(false);
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_243_prepareTransformedBlitMatrix)
HXLINE( 244)		mat->a = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,0)) );
HXDLIN( 244)		mat->b = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,1)) );
HXDLIN( 244)		mat->c = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,2)) );
HXDLIN( 244)		mat->d = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,3)) );
HXDLIN( 244)		mat->tx = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,4)) );
HXDLIN( 244)		mat->ty = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,5)) );
HXLINE( 245)		int w = ::Std_obj::_hx_int(this->sourceSize->x);
HXDLIN( 245)		int h = ::Std_obj::_hx_int(this->sourceSize->y);
HXDLIN( 245)		if ((rotation != 0)) {
HXLINE( 245)			int t = w;
HXDLIN( 245)			w = h;
HXDLIN( 245)			h = t;
HXDLIN( 245)			if ((rotation == 90)) {
HXLINE( 245)				mat->setTo(-(mat->b),mat->a,-(mat->d),mat->c,-(mat->ty),mat->tx);
HXDLIN( 245)				mat->translate(this->sourceSize->y,( (Float)(0) ));
            			}
            			else {
HXLINE( 245)				bool _hx_tmp;
HXDLIN( 245)				if ((rotation != -90)) {
HXLINE( 245)					_hx_tmp = (rotation == -90);
            				}
            				else {
HXLINE( 245)					_hx_tmp = true;
            				}
HXDLIN( 245)				if (_hx_tmp) {
HXLINE( 245)					mat->setTo(mat->b,-(mat->a),mat->d,-(mat->c),mat->ty,-(mat->tx));
HXDLIN( 245)					mat->translate(( (Float)(0) ),this->sourceSize->x);
            				}
            			}
            		}
HXDLIN( 245)		if (flipX) {
HXLINE( 245)			mat->scale(( (Float)(-1) ),( (Float)(1) ));
HXDLIN( 245)			mat->translate(( (Float)(w) ),( (Float)(0) ));
            		}
HXDLIN( 245)		if (flipY) {
HXLINE( 245)			mat->scale(( (Float)(1) ),( (Float)(-1) ));
HXDLIN( 245)			mat->translate(( (Float)(0) ),( (Float)(h) ));
            		}
HXDLIN( 245)		return mat;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxFrame_obj,prepareTransformedBlitMatrix,return )

 ::flixel::math::FlxMatrix FlxFrame_obj::prepareMatrix( ::flixel::math::FlxMatrix mat,::hx::Null< int >  __o_rotation,::hx::Null< bool >  __o_flipX,::hx::Null< bool >  __o_flipY){
            		int rotation = __o_rotation.Default(0);
            		bool flipX = __o_flipX.Default(false);
            		bool flipY = __o_flipY.Default(false);
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_258_prepareMatrix)
HXLINE( 259)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 261)			mat->identity();
HXLINE( 262)			return mat;
            		}
HXLINE( 265)		mat->a = ( (Float)(_hx_array_unsafe_get(this->tileMatrix,0)) );
HXLINE( 266)		mat->b = ( (Float)(_hx_array_unsafe_get(this->tileMatrix,1)) );
HXLINE( 267)		mat->c = ( (Float)(_hx_array_unsafe_get(this->tileMatrix,2)) );
HXLINE( 268)		mat->d = ( (Float)(_hx_array_unsafe_get(this->tileMatrix,3)) );
HXLINE( 269)		mat->tx = ( (Float)(_hx_array_unsafe_get(this->tileMatrix,4)) );
HXLINE( 270)		mat->ty = ( (Float)(_hx_array_unsafe_get(this->tileMatrix,5)) );
HXLINE( 272)		bool doFlipX = (flipX != this->flipX);
HXLINE( 273)		bool doFlipY = (flipY != this->flipY);
HXLINE( 275)		bool _hx_tmp;
HXDLIN( 275)		bool _hx_tmp1;
HXDLIN( 275)		if ((rotation == 0)) {
HXLINE( 275)			_hx_tmp1 = !(doFlipX);
            		}
            		else {
HXLINE( 275)			_hx_tmp1 = false;
            		}
HXDLIN( 275)		if (_hx_tmp1) {
HXLINE( 275)			_hx_tmp = !(doFlipY);
            		}
            		else {
HXLINE( 275)			_hx_tmp = false;
            		}
HXDLIN( 275)		if (_hx_tmp) {
HXLINE( 276)			return mat;
            		}
HXLINE( 278)		int w = ::Std_obj::_hx_int(this->sourceSize->x);
HXDLIN( 278)		int h = ::Std_obj::_hx_int(this->sourceSize->y);
HXDLIN( 278)		if ((rotation != 0)) {
HXLINE( 278)			int t = w;
HXDLIN( 278)			w = h;
HXDLIN( 278)			h = t;
HXDLIN( 278)			if ((rotation == 90)) {
HXLINE( 278)				mat->setTo(-(mat->b),mat->a,-(mat->d),mat->c,-(mat->ty),mat->tx);
HXDLIN( 278)				mat->translate(this->sourceSize->y,( (Float)(0) ));
            			}
            			else {
HXLINE( 278)				bool _hx_tmp;
HXDLIN( 278)				if ((rotation != -90)) {
HXLINE( 278)					_hx_tmp = (rotation == -90);
            				}
            				else {
HXLINE( 278)					_hx_tmp = true;
            				}
HXDLIN( 278)				if (_hx_tmp) {
HXLINE( 278)					mat->setTo(mat->b,-(mat->a),mat->d,-(mat->c),mat->ty,-(mat->tx));
HXDLIN( 278)					mat->translate(( (Float)(0) ),this->sourceSize->x);
            				}
            			}
            		}
HXDLIN( 278)		if (doFlipX) {
HXLINE( 278)			mat->scale(( (Float)(-1) ),( (Float)(1) ));
HXDLIN( 278)			mat->translate(( (Float)(w) ),( (Float)(0) ));
            		}
HXDLIN( 278)		if (doFlipY) {
HXLINE( 278)			mat->scale(( (Float)(1) ),( (Float)(-1) ));
HXDLIN( 278)			mat->translate(( (Float)(0) ),( (Float)(h) ));
            		}
HXDLIN( 278)		return mat;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxFrame_obj,prepareMatrix,return )

 ::flixel::math::FlxMatrix FlxFrame_obj::fillBlitMatrix( ::flixel::math::FlxMatrix mat){
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_282_fillBlitMatrix)
HXLINE( 283)		mat->a = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,0)) );
HXLINE( 284)		mat->b = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,1)) );
HXLINE( 285)		mat->c = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,2)) );
HXLINE( 286)		mat->d = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,3)) );
HXLINE( 287)		mat->tx = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,4)) );
HXLINE( 288)		mat->ty = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,5)) );
HXLINE( 289)		return mat;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFrame_obj,fillBlitMatrix,return )

 ::openfl::display::BitmapData FlxFrame_obj::paint( ::openfl::display::BitmapData bmd, ::openfl::geom::Point point,::hx::Null< bool >  __o_mergeAlpha,::hx::Null< bool >  __o_disposeIfNotEqual){
            		bool mergeAlpha = __o_mergeAlpha.Default(false);
            		bool disposeIfNotEqual = __o_disposeIfNotEqual.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_5df8bdd839d6a258_305_paint)
HXLINE( 306)		 ::openfl::display::BitmapData bmd1 = bmd;
HXDLIN( 306)		bool flipXY = (0 != 0);
HXDLIN( 306)		Float w;
HXDLIN( 306)		if (flipXY) {
HXLINE( 306)			w = this->sourceSize->y;
            		}
            		else {
HXLINE( 306)			w = this->sourceSize->x;
            		}
HXDLIN( 306)		int w1 = ::Std_obj::_hx_int(w);
HXDLIN( 306)		Float h;
HXDLIN( 306)		if (flipXY) {
HXLINE( 306)			h = this->sourceSize->x;
            		}
            		else {
HXLINE( 306)			h = this->sourceSize->y;
            		}
HXDLIN( 306)		int h1 = ::Std_obj::_hx_int(h);
HXDLIN( 306)		bool bmd2;
HXDLIN( 306)		if (::hx::IsNotNull( bmd1 )) {
HXLINE( 306)			bmd2 = disposeIfNotEqual;
            		}
            		else {
HXLINE( 306)			bmd2 = false;
            		}
HXDLIN( 306)		if (bmd2) {
HXLINE( 306)			bmd1 = ::flixel::util::FlxDestroyUtil_obj::disposeIfNotEqual(bmd1,( (Float)(w1) ),( (Float)(h1) ));
            		}
HXDLIN( 306)		bool bmd3;
HXDLIN( 306)		if (::hx::IsNotNull( bmd1 )) {
HXLINE( 306)			bmd3 = !(mergeAlpha);
            		}
            		else {
HXLINE( 306)			bmd3 = false;
            		}
HXDLIN( 306)		if (bmd3) {
HXLINE( 306)			if (::hx::IsNotNull( point )) {
HXLINE( 306)				::flixel::graphics::frames::FlxFrame_obj::_rect->setTo(point->x,point->y,( (Float)(w1) ),( (Float)(h1) ));
            			}
            			else {
HXLINE( 306)				::flixel::graphics::frames::FlxFrame_obj::_rect->setTo(( (Float)(0) ),( (Float)(0) ),( (Float)(w1) ),( (Float)(h1) ));
            			}
HXDLIN( 306)			bmd1->fillRect(::flixel::graphics::frames::FlxFrame_obj::_rect,0);
            		}
            		else {
HXLINE( 306)			if (::hx::IsNull( bmd1 )) {
HXLINE( 306)				bmd1 =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,w1,h1,true,0);
            			}
            		}
HXDLIN( 306)		bmd = bmd1;
HXLINE( 308)		if ((this->type == 2)) {
HXLINE( 309)			return bmd;
            		}
HXLINE( 311)		if ((this->angle == 0)) {
HXLINE( 313)			{
HXLINE( 313)				 ::flixel::math::FlxBasePoint this1 = this->offset;
HXDLIN( 313)				 ::openfl::geom::Point p = ::flixel::graphics::frames::FlxFrame_obj::_point;
HXDLIN( 313)				if (::hx::IsNull( p )) {
HXLINE( 313)					p =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
            				}
HXDLIN( 313)				p->x = this1->x;
HXDLIN( 313)				p->y = this1->y;
            			}
HXLINE( 314)			if (::hx::IsNotNull( point )) {
HXLINE( 315)				::flixel::graphics::frames::FlxFrame_obj::_point->offset(point->x,point->y);
            			}
HXLINE( 317)			 ::openfl::display::BitmapData _hx_tmp = this->parent->bitmap;
HXDLIN( 317)			 ::flixel::math::FlxRect _this = this->frame;
HXDLIN( 317)			 ::openfl::geom::Rectangle FlashRect = ::flixel::graphics::frames::FlxFrame_obj::_rect;
HXDLIN( 317)			if (::hx::IsNull( FlashRect )) {
HXLINE( 317)				FlashRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            			}
HXDLIN( 317)			FlashRect->x = _this->x;
HXDLIN( 317)			FlashRect->y = _this->y;
HXDLIN( 317)			FlashRect->width = _this->width;
HXDLIN( 317)			FlashRect->height = _this->height;
HXDLIN( 317)			bmd->copyPixels(_hx_tmp,FlashRect,::flixel::graphics::frames::FlxFrame_obj::_point,null(),null(),mergeAlpha);
            		}
            		else {
HXLINE( 321)			{
HXLINE( 321)				 ::flixel::math::FlxMatrix mat = ::flixel::graphics::frames::FlxFrame_obj::_matrix;
HXDLIN( 321)				mat->a = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,0)) );
HXDLIN( 321)				mat->b = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,1)) );
HXDLIN( 321)				mat->c = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,2)) );
HXDLIN( 321)				mat->d = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,3)) );
HXDLIN( 321)				mat->tx = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,4)) );
HXDLIN( 321)				mat->ty = ( (Float)(_hx_array_unsafe_get(this->blitMatrix,5)) );
            			}
HXLINE( 322)			if (::hx::IsNotNull( point )) {
HXLINE( 323)				::flixel::graphics::frames::FlxFrame_obj::_matrix->translate(point->x,point->y);
            			}
HXLINE( 325)			 ::openfl::display::BitmapData _hx_tmp = this->parent->bitmap;
HXDLIN( 325)			 ::flixel::math::FlxMatrix _hx_tmp1 = ::flixel::graphics::frames::FlxFrame_obj::_matrix;
HXDLIN( 325)			 ::flixel::math::FlxMatrix mat1 = ::flixel::graphics::frames::FlxFrame_obj::_matrix;
HXDLIN( 325)			 ::openfl::geom::Rectangle rect = ::flixel::graphics::frames::FlxFrame_obj::_rect;
HXDLIN( 325)			Float x = this->frame->x;
HXDLIN( 325)			Float y = this->frame->y;
HXDLIN( 325)			 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN( 325)			point1->_inPool = false;
HXDLIN( 325)			 ::flixel::math::FlxBasePoint point2 = point1;
HXDLIN( 325)			point2->_weak = true;
HXDLIN( 325)			 ::flixel::math::FlxBasePoint p1 = point2;
HXDLIN( 325)			 ::flixel::math::FlxRect _this = this->frame;
HXDLIN( 325)			Float x1 = (_this->x + _this->width);
HXDLIN( 325)			 ::flixel::math::FlxRect _this1 = this->frame;
HXDLIN( 325)			Float y1 = (_this1->y + _this1->height);
HXDLIN( 325)			 ::flixel::math::FlxBasePoint point3 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x1,y1);
HXDLIN( 325)			point3->_inPool = false;
HXDLIN( 325)			 ::flixel::math::FlxBasePoint point4 = point3;
HXDLIN( 325)			point4->_weak = true;
HXDLIN( 325)			 ::flixel::math::FlxBasePoint p2 = point4;
HXDLIN( 325)			{
HXLINE( 325)				Float x11 = (((p1->x * mat1->a) + (p1->y * mat1->c)) + mat1->tx);
HXDLIN( 325)				Float y11 = (((p1->x * mat1->b) + (p1->y * mat1->d)) + mat1->ty);
HXDLIN( 325)				{
HXLINE( 325)					p1->set_x(x11);
HXDLIN( 325)					p1->set_y(y11);
            				}
            			}
HXDLIN( 325)			{
HXLINE( 325)				Float x12 = (((p2->x * mat1->a) + (p2->y * mat1->c)) + mat1->tx);
HXDLIN( 325)				Float y12 = (((p2->x * mat1->b) + (p2->y * mat1->d)) + mat1->ty);
HXDLIN( 325)				{
HXLINE( 325)					p2->set_x(x12);
HXDLIN( 325)					p2->set_y(y12);
            				}
            			}
HXDLIN( 325)			 ::flixel::math::FlxRect _this2 = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 325)			_this2->x = ( (Float)(0) );
HXDLIN( 325)			_this2->y = ( (Float)(0) );
HXDLIN( 325)			_this2->width = ( (Float)(0) );
HXDLIN( 325)			_this2->height = ( (Float)(0) );
HXDLIN( 325)			 ::flixel::math::FlxRect rect1 = _this2;
HXDLIN( 325)			rect1->_inPool = false;
HXDLIN( 325)			 ::flixel::math::FlxRect _this3 = rect1;
HXDLIN( 325)			Float minX = ::Math_obj::min(p1->x,p2->x);
HXDLIN( 325)			Float minY = ::Math_obj::min(p1->y,p2->y);
HXDLIN( 325)			Float maxX = ::Math_obj::max(p1->x,p2->x);
HXDLIN( 325)			Float maxY = ::Math_obj::max(p1->y,p2->y);
HXDLIN( 325)			if (p1->_weak) {
HXLINE( 325)				p1->put();
            			}
HXDLIN( 325)			if (p2->_weak) {
HXLINE( 325)				p2->put();
            			}
HXDLIN( 325)			_this3->x = minX;
HXDLIN( 325)			_this3->y = minY;
HXDLIN( 325)			_this3->width = (maxX - minX);
HXDLIN( 325)			_this3->height = (maxY - minY);
HXDLIN( 325)			 ::flixel::math::FlxRect flxRect = _this3;
HXDLIN( 325)			{
HXLINE( 325)				 ::openfl::geom::Rectangle FlashRect = rect;
HXDLIN( 325)				if (::hx::IsNull( FlashRect )) {
HXLINE( 325)					FlashRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            				}
HXDLIN( 325)				FlashRect->x = flxRect->x;
HXDLIN( 325)				FlashRect->y = flxRect->y;
HXDLIN( 325)				FlashRect->width = flxRect->width;
HXDLIN( 325)				FlashRect->height = flxRect->height;
            			}
HXDLIN( 325)			if (!(flxRect->_inPool)) {
HXLINE( 325)				flxRect->_inPool = true;
HXDLIN( 325)				flxRect->_weak = false;
HXDLIN( 325)				::flixel::math::FlxRect_obj::_pool->putUnsafe(flxRect);
            			}
HXDLIN( 325)			bmd->draw(_hx_tmp,_hx_tmp1,null(),null(),rect,null());
            		}
HXLINE( 328)		return bmd;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxFrame_obj,paint,return )

 ::openfl::display::BitmapData FlxFrame_obj::paintRotatedAndFlipped( ::openfl::display::BitmapData bmd, ::openfl::geom::Point point,::hx::Null< int >  __o_rotation,::hx::Null< bool >  __o_flipX,::hx::Null< bool >  __o_flipY,::hx::Null< bool >  __o_mergeAlpha,::hx::Null< bool >  __o_disposeIfNotEqual){
            		int rotation = __o_rotation.Default(0);
            		bool flipX = __o_flipX.Default(false);
            		bool flipY = __o_flipY.Default(false);
            		bool mergeAlpha = __o_mergeAlpha.Default(false);
            		bool disposeIfNotEqual = __o_disposeIfNotEqual.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_5df8bdd839d6a258_348_paintRotatedAndFlipped)
HXLINE( 349)		bool _hx_tmp;
HXDLIN( 349)		if ((this->type == 2)) {
HXLINE( 349)			_hx_tmp = (rotation == 0);
            		}
            		else {
HXLINE( 349)			_hx_tmp = false;
            		}
HXDLIN( 349)		if (_hx_tmp) {
HXLINE( 350)			return this->paint(bmd,point,mergeAlpha,disposeIfNotEqual);
            		}
HXLINE( 352)		 ::openfl::display::BitmapData bmd1 = bmd;
HXDLIN( 352)		bool flipXY = (rotation != 0);
HXDLIN( 352)		Float w;
HXDLIN( 352)		if (flipXY) {
HXLINE( 352)			w = this->sourceSize->y;
            		}
            		else {
HXLINE( 352)			w = this->sourceSize->x;
            		}
HXDLIN( 352)		int w1 = ::Std_obj::_hx_int(w);
HXDLIN( 352)		Float h;
HXDLIN( 352)		if (flipXY) {
HXLINE( 352)			h = this->sourceSize->x;
            		}
            		else {
HXLINE( 352)			h = this->sourceSize->y;
            		}
HXDLIN( 352)		int h1 = ::Std_obj::_hx_int(h);
HXDLIN( 352)		bool bmd2;
HXDLIN( 352)		if (::hx::IsNotNull( bmd1 )) {
HXLINE( 352)			bmd2 = disposeIfNotEqual;
            		}
            		else {
HXLINE( 352)			bmd2 = false;
            		}
HXDLIN( 352)		if (bmd2) {
HXLINE( 352)			bmd1 = ::flixel::util::FlxDestroyUtil_obj::disposeIfNotEqual(bmd1,( (Float)(w1) ),( (Float)(h1) ));
            		}
HXDLIN( 352)		bool bmd3;
HXDLIN( 352)		if (::hx::IsNotNull( bmd1 )) {
HXLINE( 352)			bmd3 = !(mergeAlpha);
            		}
            		else {
HXLINE( 352)			bmd3 = false;
            		}
HXDLIN( 352)		if (bmd3) {
HXLINE( 352)			if (::hx::IsNotNull( point )) {
HXLINE( 352)				::flixel::graphics::frames::FlxFrame_obj::_rect->setTo(point->x,point->y,( (Float)(w1) ),( (Float)(h1) ));
            			}
            			else {
HXLINE( 352)				::flixel::graphics::frames::FlxFrame_obj::_rect->setTo(( (Float)(0) ),( (Float)(0) ),( (Float)(w1) ),( (Float)(h1) ));
            			}
HXDLIN( 352)			bmd1->fillRect(::flixel::graphics::frames::FlxFrame_obj::_rect,0);
            		}
            		else {
HXLINE( 352)			if (::hx::IsNull( bmd1 )) {
HXLINE( 352)				bmd1 =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,w1,h1,true,0);
            			}
            		}
HXDLIN( 352)		bmd = bmd1;
HXLINE( 354)		if ((this->type == 2)) {
HXLINE( 355)			return bmd;
            		}
HXLINE( 357)		bool doFlipX = (flipX != this->flipX);
HXLINE( 358)		bool doFlipY = (flipY != this->flipY);
HXLINE( 360)		this->prepareTransformedBlitMatrix(::flixel::graphics::frames::FlxFrame_obj::_matrix,rotation,doFlipX,doFlipY);
HXLINE( 362)		if (::hx::IsNotNull( point )) {
HXLINE( 363)			::flixel::graphics::frames::FlxFrame_obj::_matrix->translate(point->x,point->y);
            		}
HXLINE( 365)		 ::openfl::display::BitmapData _hx_tmp1 = this->parent->bitmap;
HXDLIN( 365)		 ::flixel::math::FlxMatrix _hx_tmp2 = ::flixel::graphics::frames::FlxFrame_obj::_matrix;
HXDLIN( 365)		 ::flixel::math::FlxMatrix mat = ::flixel::graphics::frames::FlxFrame_obj::_matrix;
HXDLIN( 365)		 ::openfl::geom::Rectangle rect = ::flixel::graphics::frames::FlxFrame_obj::_rect;
HXDLIN( 365)		Float x = this->frame->x;
HXDLIN( 365)		Float y = this->frame->y;
HXDLIN( 365)		 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN( 365)		point1->_inPool = false;
HXDLIN( 365)		 ::flixel::math::FlxBasePoint point2 = point1;
HXDLIN( 365)		point2->_weak = true;
HXDLIN( 365)		 ::flixel::math::FlxBasePoint p1 = point2;
HXDLIN( 365)		 ::flixel::math::FlxRect _this = this->frame;
HXDLIN( 365)		Float x1 = (_this->x + _this->width);
HXDLIN( 365)		 ::flixel::math::FlxRect _this1 = this->frame;
HXDLIN( 365)		Float y1 = (_this1->y + _this1->height);
HXDLIN( 365)		 ::flixel::math::FlxBasePoint point3 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x1,y1);
HXDLIN( 365)		point3->_inPool = false;
HXDLIN( 365)		 ::flixel::math::FlxBasePoint point4 = point3;
HXDLIN( 365)		point4->_weak = true;
HXDLIN( 365)		 ::flixel::math::FlxBasePoint p2 = point4;
HXDLIN( 365)		{
HXLINE( 365)			Float x11 = (((p1->x * mat->a) + (p1->y * mat->c)) + mat->tx);
HXDLIN( 365)			Float y11 = (((p1->x * mat->b) + (p1->y * mat->d)) + mat->ty);
HXDLIN( 365)			{
HXLINE( 365)				p1->set_x(x11);
HXDLIN( 365)				p1->set_y(y11);
            			}
            		}
HXDLIN( 365)		{
HXLINE( 365)			Float x12 = (((p2->x * mat->a) + (p2->y * mat->c)) + mat->tx);
HXDLIN( 365)			Float y12 = (((p2->x * mat->b) + (p2->y * mat->d)) + mat->ty);
HXDLIN( 365)			{
HXLINE( 365)				p2->set_x(x12);
HXDLIN( 365)				p2->set_y(y12);
            			}
            		}
HXDLIN( 365)		 ::flixel::math::FlxRect _this2 = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 365)		_this2->x = ( (Float)(0) );
HXDLIN( 365)		_this2->y = ( (Float)(0) );
HXDLIN( 365)		_this2->width = ( (Float)(0) );
HXDLIN( 365)		_this2->height = ( (Float)(0) );
HXDLIN( 365)		 ::flixel::math::FlxRect rect1 = _this2;
HXDLIN( 365)		rect1->_inPool = false;
HXDLIN( 365)		 ::flixel::math::FlxRect _this3 = rect1;
HXDLIN( 365)		Float minX = ::Math_obj::min(p1->x,p2->x);
HXDLIN( 365)		Float minY = ::Math_obj::min(p1->y,p2->y);
HXDLIN( 365)		Float maxX = ::Math_obj::max(p1->x,p2->x);
HXDLIN( 365)		Float maxY = ::Math_obj::max(p1->y,p2->y);
HXDLIN( 365)		if (p1->_weak) {
HXLINE( 365)			p1->put();
            		}
HXDLIN( 365)		if (p2->_weak) {
HXLINE( 365)			p2->put();
            		}
HXDLIN( 365)		_this3->x = minX;
HXDLIN( 365)		_this3->y = minY;
HXDLIN( 365)		_this3->width = (maxX - minX);
HXDLIN( 365)		_this3->height = (maxY - minY);
HXDLIN( 365)		 ::flixel::math::FlxRect flxRect = _this3;
HXDLIN( 365)		{
HXLINE( 365)			 ::openfl::geom::Rectangle FlashRect = rect;
HXDLIN( 365)			if (::hx::IsNull( FlashRect )) {
HXLINE( 365)				FlashRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            			}
HXDLIN( 365)			FlashRect->x = flxRect->x;
HXDLIN( 365)			FlashRect->y = flxRect->y;
HXDLIN( 365)			FlashRect->width = flxRect->width;
HXDLIN( 365)			FlashRect->height = flxRect->height;
            		}
HXDLIN( 365)		if (!(flxRect->_inPool)) {
HXLINE( 365)			flxRect->_inPool = true;
HXDLIN( 365)			flxRect->_weak = false;
HXDLIN( 365)			::flixel::math::FlxRect_obj::_pool->putUnsafe(flxRect);
            		}
HXDLIN( 365)		bmd->draw(_hx_tmp1,_hx_tmp2,null(),null(),rect,null());
HXLINE( 366)		return bmd;
            	}


HX_DEFINE_DYNAMIC_FUNC7(FlxFrame_obj,paintRotatedAndFlipped,return )

 ::openfl::display::BitmapData FlxFrame_obj::checkInputBitmap( ::openfl::display::BitmapData bmd, ::openfl::geom::Point point,::hx::Null< int >  __o_rotation,::hx::Null< bool >  __o_mergeAlpha,::hx::Null< bool >  __o_disposeIfNotEqual){
            		int rotation = __o_rotation.Default(0);
            		bool mergeAlpha = __o_mergeAlpha.Default(false);
            		bool disposeIfNotEqual = __o_disposeIfNotEqual.Default(false);
            	HX_GC_STACKFRAME(&_hx_pos_5df8bdd839d6a258_383_checkInputBitmap)
HXLINE( 384)		bool flipXY = (rotation != 0);
HXLINE( 385)		Float w;
HXDLIN( 385)		if (flipXY) {
HXLINE( 385)			w = this->sourceSize->y;
            		}
            		else {
HXLINE( 385)			w = this->sourceSize->x;
            		}
HXDLIN( 385)		int w1 = ::Std_obj::_hx_int(w);
HXLINE( 386)		Float h;
HXDLIN( 386)		if (flipXY) {
HXLINE( 386)			h = this->sourceSize->x;
            		}
            		else {
HXLINE( 386)			h = this->sourceSize->y;
            		}
HXDLIN( 386)		int h1 = ::Std_obj::_hx_int(h);
HXLINE( 388)		bool _hx_tmp;
HXDLIN( 388)		if (::hx::IsNotNull( bmd )) {
HXLINE( 388)			_hx_tmp = disposeIfNotEqual;
            		}
            		else {
HXLINE( 388)			_hx_tmp = false;
            		}
HXDLIN( 388)		if (_hx_tmp) {
HXLINE( 389)			bmd = ::flixel::util::FlxDestroyUtil_obj::disposeIfNotEqual(bmd,( (Float)(w1) ),( (Float)(h1) ));
            		}
HXLINE( 391)		bool _hx_tmp1;
HXDLIN( 391)		if (::hx::IsNotNull( bmd )) {
HXLINE( 391)			_hx_tmp1 = !(mergeAlpha);
            		}
            		else {
HXLINE( 391)			_hx_tmp1 = false;
            		}
HXDLIN( 391)		if (_hx_tmp1) {
HXLINE( 393)			if (::hx::IsNotNull( point )) {
HXLINE( 394)				::flixel::graphics::frames::FlxFrame_obj::_rect->setTo(point->x,point->y,( (Float)(w1) ),( (Float)(h1) ));
            			}
            			else {
HXLINE( 396)				::flixel::graphics::frames::FlxFrame_obj::_rect->setTo(( (Float)(0) ),( (Float)(0) ),( (Float)(w1) ),( (Float)(h1) ));
            			}
HXLINE( 398)			bmd->fillRect(::flixel::graphics::frames::FlxFrame_obj::_rect,0);
            		}
            		else {
HXLINE( 400)			if (::hx::IsNull( bmd )) {
HXLINE( 402)				bmd =  ::openfl::display::BitmapData_obj::__alloc( HX_CTX ,w1,h1,true,0);
            			}
            		}
HXLINE( 405)		return bmd;
            	}


HX_DEFINE_DYNAMIC_FUNC5(FlxFrame_obj,checkInputBitmap,return )

 ::openfl::geom::Rectangle FlxFrame_obj::getDrawFrameRect( ::flixel::math::FlxMatrix mat, ::openfl::geom::Rectangle rect){
            	HX_GC_STACKFRAME(&_hx_pos_5df8bdd839d6a258_417_getDrawFrameRect)
HXLINE( 418)		Float x = this->frame->x;
HXDLIN( 418)		Float y = this->frame->y;
HXDLIN( 418)		 ::flixel::math::FlxBasePoint point = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y);
HXDLIN( 418)		point->_inPool = false;
HXDLIN( 418)		 ::flixel::math::FlxBasePoint point1 = point;
HXDLIN( 418)		point1->_weak = true;
HXDLIN( 418)		 ::flixel::math::FlxBasePoint p1 = point1;
HXLINE( 419)		 ::flixel::math::FlxRect _this = this->frame;
HXDLIN( 419)		Float x1 = (_this->x + _this->width);
HXDLIN( 419)		 ::flixel::math::FlxRect _this1 = this->frame;
HXDLIN( 419)		Float y1 = (_this1->y + _this1->height);
HXDLIN( 419)		 ::flixel::math::FlxBasePoint point2 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x1,y1);
HXDLIN( 419)		point2->_inPool = false;
HXDLIN( 419)		 ::flixel::math::FlxBasePoint point3 = point2;
HXDLIN( 419)		point3->_weak = true;
HXDLIN( 419)		 ::flixel::math::FlxBasePoint p2 = point3;
HXLINE( 421)		{
HXLINE( 421)			Float x11 = (((p1->x * mat->a) + (p1->y * mat->c)) + mat->tx);
HXDLIN( 421)			Float y11 = (((p1->x * mat->b) + (p1->y * mat->d)) + mat->ty);
HXDLIN( 421)			{
HXLINE( 421)				p1->set_x(x11);
HXDLIN( 421)				p1->set_y(y11);
            			}
            		}
HXLINE( 422)		{
HXLINE( 422)			Float x12 = (((p2->x * mat->a) + (p2->y * mat->c)) + mat->tx);
HXDLIN( 422)			Float y12 = (((p2->x * mat->b) + (p2->y * mat->d)) + mat->ty);
HXDLIN( 422)			{
HXLINE( 422)				p2->set_x(x12);
HXDLIN( 422)				p2->set_y(y12);
            			}
            		}
HXLINE( 424)		 ::flixel::math::FlxRect _this2 = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 424)		_this2->x = ( (Float)(0) );
HXDLIN( 424)		_this2->y = ( (Float)(0) );
HXDLIN( 424)		_this2->width = ( (Float)(0) );
HXDLIN( 424)		_this2->height = ( (Float)(0) );
HXDLIN( 424)		 ::flixel::math::FlxRect rect1 = _this2;
HXDLIN( 424)		rect1->_inPool = false;
HXDLIN( 424)		 ::flixel::math::FlxRect _this3 = rect1;
HXDLIN( 424)		Float minX = ::Math_obj::min(p1->x,p2->x);
HXDLIN( 424)		Float minY = ::Math_obj::min(p1->y,p2->y);
HXDLIN( 424)		Float maxX = ::Math_obj::max(p1->x,p2->x);
HXDLIN( 424)		Float maxY = ::Math_obj::max(p1->y,p2->y);
HXDLIN( 424)		if (p1->_weak) {
HXLINE( 424)			p1->put();
            		}
HXDLIN( 424)		if (p2->_weak) {
HXLINE( 424)			p2->put();
            		}
HXDLIN( 424)		_this3->x = minX;
HXDLIN( 424)		_this3->y = minY;
HXDLIN( 424)		_this3->width = (maxX - minX);
HXDLIN( 424)		_this3->height = (maxY - minY);
HXDLIN( 424)		 ::flixel::math::FlxRect flxRect = _this3;
HXLINE( 425)		{
HXLINE( 425)			 ::openfl::geom::Rectangle FlashRect = rect;
HXDLIN( 425)			if (::hx::IsNull( FlashRect )) {
HXLINE( 425)				FlashRect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            			}
HXDLIN( 425)			FlashRect->x = flxRect->x;
HXDLIN( 425)			FlashRect->y = flxRect->y;
HXDLIN( 425)			FlashRect->width = flxRect->width;
HXDLIN( 425)			FlashRect->height = flxRect->height;
            		}
HXLINE( 426)		if (!(flxRect->_inPool)) {
HXLINE( 426)			flxRect->_inPool = true;
HXDLIN( 426)			flxRect->_weak = false;
HXDLIN( 426)			::flixel::math::FlxRect_obj::_pool->putUnsafe(flxRect);
            		}
HXLINE( 427)		return rect;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxFrame_obj,getDrawFrameRect,return )

 ::flixel::graphics::frames::FlxFrame FlxFrame_obj::subFrameTo( ::flixel::math::FlxRect rect, ::flixel::graphics::frames::FlxFrame frameToFill){
            	HX_GC_STACKFRAME(&_hx_pos_5df8bdd839d6a258_438_subFrameTo)
HXLINE( 439)		if (::hx::IsNull( frameToFill )) {
HXLINE( 441)			frameToFill =  ::flixel::graphics::frames::FlxFrame_obj::__alloc( HX_CTX ,this->parent,this->angle,null(),null(),null());
            		}
            		else {
HXLINE( 445)			frameToFill->parent = this->parent;
HXLINE( 446)			frameToFill->angle = this->angle;
HXLINE( 447)			frameToFill->set_frame(( ( ::flixel::math::FlxRect)(::flixel::util::FlxDestroyUtil_obj::put(frameToFill->frame)) ));
            		}
HXLINE( 450)		{
HXLINE( 450)			 ::flixel::math::FlxBasePoint this1 = frameToFill->sourceSize;
HXDLIN( 450)			Float y = rect->height;
HXDLIN( 450)			this1->set_x(rect->width);
HXDLIN( 450)			this1->set_y(y);
            		}
HXLINE( 453)		if ((this->type == 2)) {
HXLINE( 455)			frameToFill->type = 2;
HXLINE( 456)			{
HXLINE( 456)				 ::flixel::math::FlxBasePoint this1 = frameToFill->offset;
HXDLIN( 456)				this1->set_x(( (Float)(0) ));
HXDLIN( 456)				this1->set_y(( (Float)(0) ));
            			}
HXLINE( 457)			return frameToFill;
            		}
HXLINE( 460)		 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 460)		_this->x = ( (Float)(0) );
HXDLIN( 460)		_this->y = ( (Float)(0) );
HXDLIN( 460)		_this->width = ( (Float)(0) );
HXDLIN( 460)		_this->height = ( (Float)(0) );
HXDLIN( 460)		 ::flixel::math::FlxRect rect1 = _this;
HXDLIN( 460)		rect1->_inPool = false;
HXDLIN( 460)		 ::flixel::math::FlxRect _this1 = rect1;
HXDLIN( 460)		_this1->width = this->frame->width;
HXDLIN( 460)		_this1->height = this->frame->height;
HXDLIN( 460)		 ::flixel::math::FlxRect clippedRect = _this1;
HXLINE( 461)		if ((this->angle != 0)) {
HXLINE( 463)			clippedRect->width = this->frame->height;
HXLINE( 464)			clippedRect->height = this->frame->width;
            		}
HXLINE( 467)		Float ox = ::Math_obj::max(this->offset->x,( (Float)(0) ));
HXLINE( 468)		Float oy = ::Math_obj::max(this->offset->y,( (Float)(0) ));
HXLINE( 470)		{
HXLINE( 470)			 ::flixel::math::FlxRect rect2 = rect;
HXDLIN( 470)			rect2->x = (rect2->x + -(ox));
HXDLIN( 470)			 ::flixel::math::FlxRect rect3 = rect;
HXDLIN( 470)			rect3->y = (rect3->y + -(oy));
            		}
HXLINE( 471)		 ::flixel::math::FlxRect frameRect = clippedRect->intersection(rect,null());
HXLINE( 472)		clippedRect = ( ( ::flixel::math::FlxRect)(::flixel::util::FlxDestroyUtil_obj::put(clippedRect)) );
HXLINE( 473)		{
HXLINE( 473)			 ::flixel::math::FlxRect rect4 = rect;
HXDLIN( 473)			rect4->x = (rect4->x + ox);
HXDLIN( 473)			 ::flixel::math::FlxRect rect5 = rect;
HXDLIN( 473)			rect5->y = (rect5->y + oy);
            		}
HXLINE( 475)		bool _hx_tmp;
HXDLIN( 475)		if ((frameRect->width != 0)) {
HXLINE( 475)			_hx_tmp = (frameRect->height == 0);
            		}
            		else {
HXLINE( 475)			_hx_tmp = true;
            		}
HXDLIN( 475)		if (_hx_tmp) {
HXLINE( 477)			frameToFill->type = 2;
HXLINE( 478)			{
HXLINE( 478)				frameRect->x = ( (Float)(0) );
HXDLIN( 478)				frameRect->y = ( (Float)(0) );
HXDLIN( 478)				frameRect->width = ( (Float)(0) );
HXDLIN( 478)				frameRect->height = ( (Float)(0) );
            			}
HXLINE( 479)			frameToFill->set_frame(frameRect);
HXLINE( 480)			{
HXLINE( 480)				 ::flixel::math::FlxBasePoint this1 = frameToFill->offset;
HXDLIN( 480)				this1->set_x(( (Float)(0) ));
HXDLIN( 480)				this1->set_y(( (Float)(0) ));
            			}
            		}
            		else {
HXLINE( 484)			frameToFill->type = 0;
HXLINE( 485)			{
HXLINE( 485)				 ::flixel::math::FlxBasePoint this1 = frameToFill->offset;
HXDLIN( 485)				Float y = frameRect->y;
HXDLIN( 485)				this1->set_x(frameRect->x);
HXDLIN( 485)				this1->set_y(y);
HXDLIN( 485)				 ::flixel::math::FlxBasePoint this2 = this1;
HXDLIN( 485)				Float y1 = rect->y;
HXDLIN( 485)				this2->set_x((this2->x - rect->x));
HXDLIN( 485)				this2->set_y((this2->y - y1));
HXDLIN( 485)				 ::flixel::math::FlxBasePoint this3 = this2;
HXDLIN( 485)				 ::flixel::math::FlxBasePoint point = this->offset;
HXDLIN( 485)				{
HXLINE( 485)					Float y2 = point->y;
HXDLIN( 485)					this3->set_x((this3->x + point->x));
HXDLIN( 485)					this3->set_y((this3->y + y2));
            				}
HXDLIN( 485)				if (point->_weak) {
HXLINE( 485)					point->put();
            				}
            			}
HXLINE( 487)			Float x = frameRect->x;
HXDLIN( 487)			Float y3 = frameRect->y;
HXDLIN( 487)			 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y3);
HXDLIN( 487)			point1->_inPool = false;
HXDLIN( 487)			 ::flixel::math::FlxBasePoint point2 = point1;
HXDLIN( 487)			point2->_weak = true;
HXDLIN( 487)			 ::flixel::math::FlxBasePoint p1 = point2;
HXLINE( 488)			Float x1 = (frameRect->x + frameRect->width);
HXDLIN( 488)			Float y4 = (frameRect->y + frameRect->height);
HXDLIN( 488)			 ::flixel::math::FlxBasePoint point3 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x1,y4);
HXDLIN( 488)			point3->_inPool = false;
HXDLIN( 488)			 ::flixel::math::FlxBasePoint point4 = point3;
HXDLIN( 488)			point4->_weak = true;
HXDLIN( 488)			 ::flixel::math::FlxBasePoint p2 = point4;
HXLINE( 490)			::flixel::graphics::frames::FlxFrame_obj::_matrix->identity();
HXLINE( 492)			if ((this->angle == -90)) {
HXLINE( 494)				{
HXLINE( 494)					 ::flixel::math::FlxMatrix _this = ::flixel::graphics::frames::FlxFrame_obj::_matrix;
HXDLIN( 494)					_this->setTo(-(_this->b),_this->a,-(_this->d),_this->c,-(_this->ty),_this->tx);
            				}
HXLINE( 495)				::flixel::graphics::frames::FlxFrame_obj::_matrix->translate(this->frame->width,( (Float)(0) ));
            			}
            			else {
HXLINE( 497)				if ((this->angle == 90)) {
HXLINE( 499)					{
HXLINE( 499)						 ::flixel::math::FlxMatrix _this = ::flixel::graphics::frames::FlxFrame_obj::_matrix;
HXDLIN( 499)						_this->setTo(_this->b,-(_this->a),_this->d,-(_this->c),_this->ty,-(_this->tx));
            					}
HXLINE( 500)					::flixel::graphics::frames::FlxFrame_obj::_matrix->translate(( (Float)(0) ),this->frame->height);
            				}
            			}
HXLINE( 503)			if ((this->angle != 0)) {
HXLINE( 505)				{
HXLINE( 505)					 ::openfl::geom::Matrix matrix = ::flixel::graphics::frames::FlxFrame_obj::_matrix;
HXDLIN( 505)					Float x1 = (((p1->x * matrix->a) + (p1->y * matrix->c)) + matrix->tx);
HXDLIN( 505)					Float y1 = (((p1->x * matrix->b) + (p1->y * matrix->d)) + matrix->ty);
HXDLIN( 505)					{
HXLINE( 505)						p1->set_x(x1);
HXDLIN( 505)						p1->set_y(y1);
            					}
            				}
HXLINE( 506)				{
HXLINE( 506)					 ::openfl::geom::Matrix matrix1 = ::flixel::graphics::frames::FlxFrame_obj::_matrix;
HXDLIN( 506)					Float x11 = (((p2->x * matrix1->a) + (p2->y * matrix1->c)) + matrix1->tx);
HXDLIN( 506)					Float y11 = (((p2->x * matrix1->b) + (p2->y * matrix1->d)) + matrix1->ty);
HXDLIN( 506)					{
HXLINE( 506)						p2->set_x(x11);
HXDLIN( 506)						p2->set_y(y11);
            					}
            				}
            			}
HXLINE( 509)			{
HXLINE( 509)				Float minX = ::Math_obj::min(p1->x,p2->x);
HXDLIN( 509)				Float minY = ::Math_obj::min(p1->y,p2->y);
HXDLIN( 509)				Float maxX = ::Math_obj::max(p1->x,p2->x);
HXDLIN( 509)				Float maxY = ::Math_obj::max(p1->y,p2->y);
HXDLIN( 509)				if (p1->_weak) {
HXLINE( 509)					p1->put();
            				}
HXDLIN( 509)				if (p2->_weak) {
HXLINE( 509)					p2->put();
            				}
HXDLIN( 509)				{
HXLINE( 509)					frameRect->x = minX;
HXDLIN( 509)					frameRect->y = minY;
HXDLIN( 509)					frameRect->width = (maxX - minX);
HXDLIN( 509)					frameRect->height = (maxY - minY);
            				}
            			}
HXLINE( 510)			{
HXLINE( 510)				 ::flixel::math::FlxRect frameRect1 = frameRect;
HXDLIN( 510)				frameRect1->x = (frameRect1->x + this->frame->x);
HXDLIN( 510)				 ::flixel::math::FlxRect frameRect2 = frameRect;
HXDLIN( 510)				frameRect2->y = (frameRect2->y + this->frame->y);
            			}
HXLINE( 511)			frameToFill->set_frame(frameRect);
HXLINE( 512)			frameToFill->cacheFrameMatrix();
            		}
HXLINE( 515)		return frameToFill;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxFrame_obj,subFrameTo,return )

 ::flixel::graphics::frames::FlxFrame FlxFrame_obj::setBorderTo( ::flixel::math::FlxBasePoint border, ::flixel::graphics::frames::FlxFrame frameToFill){
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_526_setBorderTo)
HXLINE( 527)		Float X = border->x;
HXDLIN( 527)		Float Y = border->y;
HXDLIN( 527)		Float Width = (this->sourceSize->x - (( (Float)(2) ) * border->x));
HXDLIN( 527)		Float Height = (this->sourceSize->y - (( (Float)(2) ) * border->y));
HXDLIN( 527)		 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 527)		_this->x = X;
HXDLIN( 527)		_this->y = Y;
HXDLIN( 527)		_this->width = Width;
HXDLIN( 527)		_this->height = Height;
HXDLIN( 527)		 ::flixel::math::FlxRect rect = _this;
HXDLIN( 527)		rect->_inPool = false;
HXDLIN( 527)		 ::flixel::math::FlxRect rect1 = rect;
HXLINE( 528)		frameToFill = this->subFrameTo(rect1,frameToFill);
HXLINE( 529)		frameToFill->name = this->name;
HXLINE( 530)		::flixel::util::FlxDestroyUtil_obj::put(rect1);
HXLINE( 531)		return frameToFill;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxFrame_obj,setBorderTo,return )

 ::flixel::graphics::frames::FlxFrame FlxFrame_obj::clipTo( ::flixel::math::FlxRect clip, ::flixel::graphics::frames::FlxFrame clippedFrame){
            	HX_GC_STACKFRAME(&_hx_pos_5df8bdd839d6a258_543_clipTo)
HXLINE( 544)		if (::hx::IsNull( clippedFrame )) {
HXLINE( 546)			clippedFrame =  ::flixel::graphics::frames::FlxFrame_obj::__alloc( HX_CTX ,this->parent,this->angle,null(),null(),null());
            		}
            		else {
HXLINE( 550)			clippedFrame->parent = this->parent;
HXLINE( 551)			clippedFrame->angle = this->angle;
HXLINE( 552)			clippedFrame->set_frame(( ( ::flixel::math::FlxRect)(::flixel::util::FlxDestroyUtil_obj::put(clippedFrame->frame)) ));
            		}
HXLINE( 555)		{
HXLINE( 555)			 ::flixel::math::FlxBasePoint this1 = clippedFrame->sourceSize;
HXDLIN( 555)			 ::flixel::math::FlxBasePoint p = this->sourceSize;
HXDLIN( 555)			{
HXLINE( 555)				Float y = p->y;
HXDLIN( 555)				this1->set_x(p->x);
HXDLIN( 555)				this1->set_y(y);
            			}
HXDLIN( 555)			if (p->_weak) {
HXLINE( 555)				p->put();
            			}
            		}
HXLINE( 556)		clippedFrame->name = this->name;
HXLINE( 559)		if ((this->type == 2)) {
HXLINE( 561)			clippedFrame->type = 2;
HXLINE( 562)			{
HXLINE( 562)				 ::flixel::math::FlxBasePoint this1 = clippedFrame->offset;
HXDLIN( 562)				this1->set_x(( (Float)(0) ));
HXDLIN( 562)				this1->set_y(( (Float)(0) ));
            			}
HXLINE( 563)			return clippedFrame;
            		}
HXLINE( 566)		 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 566)		_this->x = ( (Float)(0) );
HXDLIN( 566)		_this->y = ( (Float)(0) );
HXDLIN( 566)		_this->width = ( (Float)(0) );
HXDLIN( 566)		_this->height = ( (Float)(0) );
HXDLIN( 566)		 ::flixel::math::FlxRect rect = _this;
HXDLIN( 566)		rect->_inPool = false;
HXDLIN( 566)		 ::flixel::math::FlxRect _this1 = rect;
HXDLIN( 566)		_this1->width = this->frame->width;
HXDLIN( 566)		_this1->height = this->frame->height;
HXDLIN( 566)		 ::flixel::math::FlxRect clippedRect = _this1;
HXLINE( 567)		if ((this->angle != 0)) {
HXLINE( 569)			clippedRect->width = this->frame->height;
HXLINE( 570)			clippedRect->height = this->frame->width;
            		}
HXLINE( 573)		{
HXLINE( 573)			 ::flixel::math::FlxRect clip1 = clip;
HXDLIN( 573)			clip1->x = (clip1->x + -(this->offset->x));
HXDLIN( 573)			 ::flixel::math::FlxRect clip2 = clip;
HXDLIN( 573)			clip2->y = (clip2->y + -(this->offset->y));
            		}
HXLINE( 574)		 ::flixel::math::FlxRect frameRect = clippedRect->intersection(clip,null());
HXLINE( 575)		clippedRect = ( ( ::flixel::math::FlxRect)(::flixel::util::FlxDestroyUtil_obj::put(clippedRect)) );
HXLINE( 577)		bool _hx_tmp;
HXDLIN( 577)		if ((frameRect->width != 0)) {
HXLINE( 577)			_hx_tmp = (frameRect->height == 0);
            		}
            		else {
HXLINE( 577)			_hx_tmp = true;
            		}
HXDLIN( 577)		if (_hx_tmp) {
HXLINE( 579)			clippedFrame->type = 2;
HXLINE( 580)			{
HXLINE( 580)				frameRect->x = ( (Float)(0) );
HXDLIN( 580)				frameRect->y = ( (Float)(0) );
HXDLIN( 580)				frameRect->width = ( (Float)(0) );
HXDLIN( 580)				frameRect->height = ( (Float)(0) );
            			}
HXLINE( 581)			clippedFrame->set_frame(frameRect);
HXLINE( 582)			{
HXLINE( 582)				 ::flixel::math::FlxBasePoint this1 = clippedFrame->offset;
HXDLIN( 582)				this1->set_x(( (Float)(0) ));
HXDLIN( 582)				this1->set_y(( (Float)(0) ));
            			}
            		}
            		else {
HXLINE( 586)			clippedFrame->type = 0;
HXLINE( 587)			{
HXLINE( 587)				 ::flixel::math::FlxBasePoint this1 = clippedFrame->offset;
HXDLIN( 587)				Float y = frameRect->y;
HXDLIN( 587)				this1->set_x(frameRect->x);
HXDLIN( 587)				this1->set_y(y);
HXDLIN( 587)				 ::flixel::math::FlxBasePoint this2 = this1;
HXDLIN( 587)				 ::flixel::math::FlxBasePoint point = this->offset;
HXDLIN( 587)				{
HXLINE( 587)					Float y1 = point->y;
HXDLIN( 587)					this2->set_x((this2->x + point->x));
HXDLIN( 587)					this2->set_y((this2->y + y1));
            				}
HXDLIN( 587)				if (point->_weak) {
HXLINE( 587)					point->put();
            				}
            			}
HXLINE( 589)			Float x = frameRect->x;
HXDLIN( 589)			Float y2 = frameRect->y;
HXDLIN( 589)			 ::flixel::math::FlxBasePoint point1 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x,y2);
HXDLIN( 589)			point1->_inPool = false;
HXDLIN( 589)			 ::flixel::math::FlxBasePoint point2 = point1;
HXDLIN( 589)			point2->_weak = true;
HXDLIN( 589)			 ::flixel::math::FlxBasePoint p1 = point2;
HXLINE( 590)			Float x1 = (frameRect->x + frameRect->width);
HXDLIN( 590)			Float y3 = (frameRect->y + frameRect->height);
HXDLIN( 590)			 ::flixel::math::FlxBasePoint point3 = ::flixel::math::FlxBasePoint_obj::pool->get().StaticCast<  ::flixel::math::FlxBasePoint >()->set(x1,y3);
HXDLIN( 590)			point3->_inPool = false;
HXDLIN( 590)			 ::flixel::math::FlxBasePoint point4 = point3;
HXDLIN( 590)			point4->_weak = true;
HXDLIN( 590)			 ::flixel::math::FlxBasePoint p2 = point4;
HXLINE( 592)			::flixel::graphics::frames::FlxFrame_obj::_matrix->identity();
HXLINE( 594)			if ((this->angle == -90)) {
HXLINE( 596)				{
HXLINE( 596)					 ::flixel::math::FlxMatrix _this = ::flixel::graphics::frames::FlxFrame_obj::_matrix;
HXDLIN( 596)					_this->setTo(-(_this->b),_this->a,-(_this->d),_this->c,-(_this->ty),_this->tx);
            				}
HXLINE( 597)				::flixel::graphics::frames::FlxFrame_obj::_matrix->translate(this->frame->width,( (Float)(0) ));
            			}
            			else {
HXLINE( 599)				if ((this->angle == 90)) {
HXLINE( 601)					{
HXLINE( 601)						 ::flixel::math::FlxMatrix _this = ::flixel::graphics::frames::FlxFrame_obj::_matrix;
HXDLIN( 601)						_this->setTo(_this->b,-(_this->a),_this->d,-(_this->c),_this->ty,-(_this->tx));
            					}
HXLINE( 602)					::flixel::graphics::frames::FlxFrame_obj::_matrix->translate(( (Float)(0) ),this->frame->height);
            				}
            			}
HXLINE( 605)			if ((this->angle != 0)) {
HXLINE( 607)				{
HXLINE( 607)					 ::openfl::geom::Matrix matrix = ::flixel::graphics::frames::FlxFrame_obj::_matrix;
HXDLIN( 607)					Float x1 = (((p1->x * matrix->a) + (p1->y * matrix->c)) + matrix->tx);
HXDLIN( 607)					Float y1 = (((p1->x * matrix->b) + (p1->y * matrix->d)) + matrix->ty);
HXDLIN( 607)					{
HXLINE( 607)						p1->set_x(x1);
HXDLIN( 607)						p1->set_y(y1);
            					}
            				}
HXLINE( 608)				{
HXLINE( 608)					 ::openfl::geom::Matrix matrix1 = ::flixel::graphics::frames::FlxFrame_obj::_matrix;
HXDLIN( 608)					Float x11 = (((p2->x * matrix1->a) + (p2->y * matrix1->c)) + matrix1->tx);
HXDLIN( 608)					Float y11 = (((p2->x * matrix1->b) + (p2->y * matrix1->d)) + matrix1->ty);
HXDLIN( 608)					{
HXLINE( 608)						p2->set_x(x11);
HXDLIN( 608)						p2->set_y(y11);
            					}
            				}
            			}
HXLINE( 611)			{
HXLINE( 611)				Float minX = ::Math_obj::min(p1->x,p2->x);
HXDLIN( 611)				Float minY = ::Math_obj::min(p1->y,p2->y);
HXDLIN( 611)				Float maxX = ::Math_obj::max(p1->x,p2->x);
HXDLIN( 611)				Float maxY = ::Math_obj::max(p1->y,p2->y);
HXDLIN( 611)				if (p1->_weak) {
HXLINE( 611)					p1->put();
            				}
HXDLIN( 611)				if (p2->_weak) {
HXLINE( 611)					p2->put();
            				}
HXDLIN( 611)				{
HXLINE( 611)					frameRect->x = minX;
HXDLIN( 611)					frameRect->y = minY;
HXDLIN( 611)					frameRect->width = (maxX - minX);
HXDLIN( 611)					frameRect->height = (maxY - minY);
            				}
            			}
HXLINE( 612)			{
HXLINE( 612)				 ::flixel::math::FlxRect frameRect1 = frameRect;
HXDLIN( 612)				frameRect1->x = (frameRect1->x + this->frame->x);
HXDLIN( 612)				 ::flixel::math::FlxRect frameRect2 = frameRect;
HXDLIN( 612)				frameRect2->y = (frameRect2->y + this->frame->y);
            			}
HXLINE( 613)			clippedFrame->set_frame(frameRect);
HXLINE( 614)			clippedFrame->cacheFrameMatrix();
            		}
HXLINE( 617)		{
HXLINE( 617)			 ::flixel::math::FlxRect clip3 = clip;
HXDLIN( 617)			clip3->x = (clip3->x + this->offset->x);
HXDLIN( 617)			 ::flixel::math::FlxRect clip4 = clip;
HXDLIN( 617)			clip4->y = (clip4->y + this->offset->y);
            		}
HXLINE( 618)		return clippedFrame;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxFrame_obj,clipTo,return )

 ::flixel::graphics::frames::FlxFrame FlxFrame_obj::copyTo( ::flixel::graphics::frames::FlxFrame clone){
            	HX_GC_STACKFRAME(&_hx_pos_5df8bdd839d6a258_628_copyTo)
HXLINE( 629)		if (::hx::IsNull( clone )) {
HXLINE( 631)			clone =  ::flixel::graphics::frames::FlxFrame_obj::__alloc( HX_CTX ,this->parent,this->angle,null(),null(),null());
            		}
            		else {
HXLINE( 635)			clone->parent = this->parent;
HXLINE( 636)			clone->angle = this->angle;
HXLINE( 637)			clone->set_frame(( ( ::flixel::math::FlxRect)(::flixel::util::FlxDestroyUtil_obj::put(clone->frame)) ));
            		}
HXLINE( 640)		{
HXLINE( 640)			 ::flixel::math::FlxBasePoint this1 = clone->offset;
HXDLIN( 640)			 ::flixel::math::FlxBasePoint p = this->offset;
HXDLIN( 640)			{
HXLINE( 640)				Float y = p->y;
HXDLIN( 640)				this1->set_x(p->x);
HXDLIN( 640)				this1->set_y(y);
            			}
HXDLIN( 640)			if (p->_weak) {
HXLINE( 640)				p->put();
            			}
            		}
HXLINE( 641)		clone->flipX = this->flipX;
HXLINE( 642)		clone->flipY = this->flipY;
HXLINE( 643)		{
HXLINE( 643)			 ::flixel::math::FlxBasePoint this2 = clone->sourceSize;
HXDLIN( 643)			 ::flixel::math::FlxBasePoint p1 = this->sourceSize;
HXDLIN( 643)			{
HXLINE( 643)				Float y1 = p1->y;
HXDLIN( 643)				this2->set_x(p1->x);
HXDLIN( 643)				this2->set_y(y1);
            			}
HXDLIN( 643)			if (p1->_weak) {
HXLINE( 643)				p1->put();
            			}
            		}
HXLINE( 644)		 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 644)		_this->x = ( (Float)(0) );
HXDLIN( 644)		_this->y = ( (Float)(0) );
HXDLIN( 644)		_this->width = ( (Float)(0) );
HXDLIN( 644)		_this->height = ( (Float)(0) );
HXDLIN( 644)		 ::flixel::math::FlxRect rect = _this;
HXDLIN( 644)		rect->_inPool = false;
HXDLIN( 644)		 ::flixel::math::FlxRect _this1 = rect;
HXDLIN( 644)		 ::flixel::math::FlxRect Rect = this->frame;
HXDLIN( 644)		_this1->x = Rect->x;
HXDLIN( 644)		_this1->y = Rect->y;
HXDLIN( 644)		_this1->width = Rect->width;
HXDLIN( 644)		_this1->height = Rect->height;
HXDLIN( 644)		if (Rect->_weak) {
HXLINE( 644)			if (!(Rect->_inPool)) {
HXLINE( 644)				Rect->_inPool = true;
HXDLIN( 644)				Rect->_weak = false;
HXDLIN( 644)				::flixel::math::FlxRect_obj::_pool->putUnsafe(Rect);
            			}
            		}
HXDLIN( 644)		clone->set_frame(_this1);
HXLINE( 645)		clone->type = this->type;
HXLINE( 646)		clone->name = this->name;
HXLINE( 647)		clone->cacheFrameMatrix();
HXLINE( 648)		return clone;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFrame_obj,copyTo,return )

void FlxFrame_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_652_destroy)
HXLINE( 653)		this->name = null();
HXLINE( 654)		this->parent = null();
HXLINE( 655)		this->sourceSize = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->sourceSize)) );
HXLINE( 656)		this->offset = ( ( ::flixel::math::FlxBasePoint)(::flixel::util::FlxDestroyUtil_obj::put(this->offset)) );
HXLINE( 657)		this->set_frame(( ( ::flixel::math::FlxRect)(::flixel::util::FlxDestroyUtil_obj::put(this->frame)) ));
HXLINE( 658)		this->uv = ( ( ::flixel::math::FlxRect)(::flixel::util::FlxDestroyUtil_obj::put(this->uv)) );
HXLINE( 659)		this->blitMatrix = null();
HXLINE( 660)		this->tileMatrix = null();
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxFrame_obj,destroy,(void))

::String FlxFrame_obj::toString(){
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_665_toString)
HXDLIN( 665)		 ::Dynamic value = this->name;
HXDLIN( 665)		 ::flixel::util::LabelValuePair _this = ::flixel::util::LabelValuePair_obj::_pool->get().StaticCast<  ::flixel::util::LabelValuePair >();
HXDLIN( 665)		_this->label = HX_("name",4b,72,ff,48);
HXDLIN( 665)		_this->value = value;
HXDLIN( 665)		return ::flixel::util::FlxStringUtil_obj::getDebugString(::Array_obj< ::Dynamic>::__new(1)->init(0,_this));
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxFrame_obj,toString,return )

 ::flixel::math::FlxRect FlxFrame_obj::set_frame( ::flixel::math::FlxRect value){
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_669_set_frame)
HXLINE( 670)		if (::hx::IsNotNull( value )) {
HXLINE( 672)			if (::hx::IsNull( this->uv )) {
HXLINE( 673)				 ::flixel::math::FlxRect _this = ::flixel::math::FlxRect_obj::_pool->get().StaticCast<  ::flixel::math::FlxRect >();
HXDLIN( 673)				_this->x = ( (Float)(0) );
HXDLIN( 673)				_this->y = ( (Float)(0) );
HXDLIN( 673)				_this->width = ( (Float)(0) );
HXDLIN( 673)				_this->height = ( (Float)(0) );
HXDLIN( 673)				 ::flixel::math::FlxRect rect = _this;
HXDLIN( 673)				rect->_inPool = false;
HXDLIN( 673)				this->uv = rect;
            			}
HXLINE( 675)			{
HXLINE( 675)				 ::flixel::math::FlxRect _this = this->uv;
HXDLIN( 675)				Float Width = ((value->x + value->width) / ( (Float)(this->parent->width) ));
HXDLIN( 675)				Float Height = ((value->y + value->height) / ( (Float)(this->parent->height) ));
HXDLIN( 675)				_this->x = (value->x / ( (Float)(this->parent->width) ));
HXDLIN( 675)				_this->y = (value->y / ( (Float)(this->parent->height) ));
HXDLIN( 675)				_this->width = Width;
HXDLIN( 675)				_this->height = Height;
            			}
            		}
HXLINE( 678)		return (this->frame = value);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxFrame_obj,set_frame,return )

 ::openfl::geom::Point FlxFrame_obj::_point;

 ::openfl::geom::Rectangle FlxFrame_obj::_rect;

 ::flixel::math::FlxMatrix FlxFrame_obj::_matrix;

void FlxFrame_obj::sort(::Array< ::Dynamic> frames,int prefixLength,int postfixLength){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,int,postfixLength1,int,prefixLength1) HXARGC(2)
            		int _hx_run( ::flixel::graphics::frames::FlxFrame frame1, ::flixel::graphics::frames::FlxFrame frame2){
            			HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_43_sort)
HXDLIN(  43)			return ::flixel::graphics::frames::FlxFrame_obj::sortByName(frame1,frame2,prefixLength1,postfixLength1);
            		}
            		HX_END_LOCAL_FUNC2(return)

            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_43_sort)
HXDLIN(  43)		int prefixLength1 = prefixLength;
HXDLIN(  43)		int postfixLength1 = postfixLength;
HXDLIN(  43)		::haxe::ds::ArraySort_obj::sort(frames, ::Dynamic(new _hx_Closure_0(postfixLength1,prefixLength1)));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(FlxFrame_obj,sort,(void))

int FlxFrame_obj::sortByName( ::flixel::graphics::frames::FlxFrame frame1, ::flixel::graphics::frames::FlxFrame frame2,int prefixLength,int postfixLength){
            	HX_STACKFRAME(&_hx_pos_5df8bdd839d6a258_47_sortByName)
HXLINE(  48)		::String name1 = frame1->name;
HXLINE(  49)		::String name2 = frame2->name;
HXLINE(  50)		 ::Dynamic num1 = ::Std_obj::parseInt(name1.substring(prefixLength,(name1.length - postfixLength)));
HXLINE(  51)		 ::Dynamic num2 = ::Std_obj::parseInt(name2.substring(prefixLength,(name2.length - postfixLength)));
HXLINE(  52)		if (::hx::IsNull( num1 )) {
HXLINE(  53)			num1 = 0;
            		}
HXLINE(  54)		if (::hx::IsNull( num2 )) {
HXLINE(  55)			num2 = 0;
            		}
HXLINE(  57)		return (( (int)(num1) ) - ( (int)(num2) ));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(FlxFrame_obj,sortByName,return )


::hx::ObjectPtr< FlxFrame_obj > FlxFrame_obj::__new( ::flixel::graphics::FlxGraphic parent,::hx::Null< int >  __o_angle,::hx::Null< bool >  __o_flipX,::hx::Null< bool >  __o_flipY,::hx::Null< Float >  __o_duration) {
	::hx::ObjectPtr< FlxFrame_obj > __this = new FlxFrame_obj();
	__this->__construct(parent,__o_angle,__o_flipX,__o_flipY,__o_duration);
	return __this;
}

::hx::ObjectPtr< FlxFrame_obj > FlxFrame_obj::__alloc(::hx::Ctx *_hx_ctx, ::flixel::graphics::FlxGraphic parent,::hx::Null< int >  __o_angle,::hx::Null< bool >  __o_flipX,::hx::Null< bool >  __o_flipY,::hx::Null< Float >  __o_duration) {
	FlxFrame_obj *__this = (FlxFrame_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxFrame_obj), true, "flixel.graphics.frames.FlxFrame"));
	*(void **)__this = FlxFrame_obj::_hx_vtable;
	__this->__construct(parent,__o_angle,__o_flipX,__o_flipY,__o_duration);
	return __this;
}

FlxFrame_obj::FlxFrame_obj()
{
}

void FlxFrame_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxFrame);
	HX_MARK_MEMBER_NAME(name,"name");
	HX_MARK_MEMBER_NAME(frame,"frame");
	HX_MARK_MEMBER_NAME(uv,"uv");
	HX_MARK_MEMBER_NAME(parent,"parent");
	HX_MARK_MEMBER_NAME(angle,"angle");
	HX_MARK_MEMBER_NAME(flipX,"flipX");
	HX_MARK_MEMBER_NAME(flipY,"flipY");
	HX_MARK_MEMBER_NAME(sourceSize,"sourceSize");
	HX_MARK_MEMBER_NAME(offset,"offset");
	HX_MARK_MEMBER_NAME(duration,"duration");
	HX_MARK_MEMBER_NAME(type,"type");
	HX_MARK_MEMBER_NAME(tileMatrix,"tileMatrix");
	HX_MARK_MEMBER_NAME(blitMatrix,"blitMatrix");
	HX_MARK_END_CLASS();
}

void FlxFrame_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(name,"name");
	HX_VISIT_MEMBER_NAME(frame,"frame");
	HX_VISIT_MEMBER_NAME(uv,"uv");
	HX_VISIT_MEMBER_NAME(parent,"parent");
	HX_VISIT_MEMBER_NAME(angle,"angle");
	HX_VISIT_MEMBER_NAME(flipX,"flipX");
	HX_VISIT_MEMBER_NAME(flipY,"flipY");
	HX_VISIT_MEMBER_NAME(sourceSize,"sourceSize");
	HX_VISIT_MEMBER_NAME(offset,"offset");
	HX_VISIT_MEMBER_NAME(duration,"duration");
	HX_VISIT_MEMBER_NAME(type,"type");
	HX_VISIT_MEMBER_NAME(tileMatrix,"tileMatrix");
	HX_VISIT_MEMBER_NAME(blitMatrix,"blitMatrix");
}

::hx::Val FlxFrame_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"uv") ) { return ::hx::Val( uv ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { return ::hx::Val( name ); }
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { return ::hx::Val( frame ); }
		if (HX_FIELD_EQ(inName,"angle") ) { return ::hx::Val( angle ); }
		if (HX_FIELD_EQ(inName,"flipX") ) { return ::hx::Val( flipX ); }
		if (HX_FIELD_EQ(inName,"flipY") ) { return ::hx::Val( flipY ); }
		if (HX_FIELD_EQ(inName,"paint") ) { return ::hx::Val( paint_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { return ::hx::Val( parent ); }
		if (HX_FIELD_EQ(inName,"offset") ) { return ::hx::Val( offset ); }
		if (HX_FIELD_EQ(inName,"clipTo") ) { return ::hx::Val( clipTo_dyn() ); }
		if (HX_FIELD_EQ(inName,"copyTo") ) { return ::hx::Val( copyTo_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { return ::hx::Val( duration ); }
		if (HX_FIELD_EQ(inName,"toString") ) { return ::hx::Val( toString_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_frame") ) { return ::hx::Val( set_frame_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sourceSize") ) { return ::hx::Val( sourceSize ); }
		if (HX_FIELD_EQ(inName,"tileMatrix") ) { return ::hx::Val( tileMatrix ); }
		if (HX_FIELD_EQ(inName,"blitMatrix") ) { return ::hx::Val( blitMatrix ); }
		if (HX_FIELD_EQ(inName,"subFrameTo") ) { return ::hx::Val( subFrameTo_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"setBorderTo") ) { return ::hx::Val( setBorderTo_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"rotateAndFlip") ) { return ::hx::Val( rotateAndFlip_dyn() ); }
		if (HX_FIELD_EQ(inName,"prepareMatrix") ) { return ::hx::Val( prepareMatrix_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"fillBlitMatrix") ) { return ::hx::Val( fillBlitMatrix_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"cacheFrameMatrix") ) { return ::hx::Val( cacheFrameMatrix_dyn() ); }
		if (HX_FIELD_EQ(inName,"checkInputBitmap") ) { return ::hx::Val( checkInputBitmap_dyn() ); }
		if (HX_FIELD_EQ(inName,"getDrawFrameRect") ) { return ::hx::Val( getDrawFrameRect_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"prepareBlitMatrix") ) { return ::hx::Val( prepareBlitMatrix_dyn() ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"paintRotatedAndFlipped") ) { return ::hx::Val( paintRotatedAndFlipped_dyn() ); }
		break;
	case 28:
		if (HX_FIELD_EQ(inName,"prepareTransformedBlitMatrix") ) { return ::hx::Val( prepareTransformedBlitMatrix_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxFrame_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"sort") ) { outValue = sort_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_rect") ) { outValue = ( _rect ); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { outValue = ( _point ); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matrix") ) { outValue = ( _matrix ); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sortByName") ) { outValue = sortByName_dyn(); return true; }
	}
	return false;
}

::hx::Val FlxFrame_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"uv") ) { uv=inValue.Cast<  ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"name") ) { name=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"frame") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_frame(inValue.Cast<  ::flixel::math::FlxRect >()) );frame=inValue.Cast<  ::flixel::math::FlxRect >(); return inValue; }
		if (HX_FIELD_EQ(inName,"angle") ) { angle=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipX") ) { flipX=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"flipY") ) { flipY=inValue.Cast< bool >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"parent") ) { parent=inValue.Cast<  ::flixel::graphics::FlxGraphic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"offset") ) { offset=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"duration") ) { duration=inValue.Cast< Float >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"sourceSize") ) { sourceSize=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		if (HX_FIELD_EQ(inName,"tileMatrix") ) { tileMatrix=inValue.Cast< ::Array< Float > >(); return inValue; }
		if (HX_FIELD_EQ(inName,"blitMatrix") ) { blitMatrix=inValue.Cast< ::Array< Float > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

bool FlxFrame_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_rect") ) { _rect=ioValue.Cast<  ::openfl::geom::Rectangle >(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_point") ) { _point=ioValue.Cast<  ::openfl::geom::Point >(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_matrix") ) { _matrix=ioValue.Cast<  ::flixel::math::FlxMatrix >(); return true; }
	}
	return false;
}

void FlxFrame_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("name",4b,72,ff,48));
	outFields->push(HX_("frame",2d,78,83,06));
	outFields->push(HX_("uv",61,66,00,00));
	outFields->push(HX_("parent",2a,05,7e,ed));
	outFields->push(HX_("angle",d3,43,e2,22));
	outFields->push(HX_("flipX",0b,45,92,02));
	outFields->push(HX_("flipY",0c,45,92,02));
	outFields->push(HX_("sourceSize",3c,87,b7,74));
	outFields->push(HX_("offset",93,97,3f,60));
	outFields->push(HX_("duration",54,0f,8e,14));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("tileMatrix",0f,0c,5f,20));
	outFields->push(HX_("blitMatrix",56,78,21,d8));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxFrame_obj_sMemberStorageInfo[] = {
	{::hx::fsString,(int)offsetof(FlxFrame_obj,name),HX_("name",4b,72,ff,48)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(int)offsetof(FlxFrame_obj,frame),HX_("frame",2d,78,83,06)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(int)offsetof(FlxFrame_obj,uv),HX_("uv",61,66,00,00)},
	{::hx::fsObject /*  ::flixel::graphics::FlxGraphic */ ,(int)offsetof(FlxFrame_obj,parent),HX_("parent",2a,05,7e,ed)},
	{::hx::fsInt,(int)offsetof(FlxFrame_obj,angle),HX_("angle",d3,43,e2,22)},
	{::hx::fsBool,(int)offsetof(FlxFrame_obj,flipX),HX_("flipX",0b,45,92,02)},
	{::hx::fsBool,(int)offsetof(FlxFrame_obj,flipY),HX_("flipY",0c,45,92,02)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxFrame_obj,sourceSize),HX_("sourceSize",3c,87,b7,74)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(FlxFrame_obj,offset),HX_("offset",93,97,3f,60)},
	{::hx::fsFloat,(int)offsetof(FlxFrame_obj,duration),HX_("duration",54,0f,8e,14)},
	{::hx::fsInt,(int)offsetof(FlxFrame_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(FlxFrame_obj,tileMatrix),HX_("tileMatrix",0f,0c,5f,20)},
	{::hx::fsObject /* ::Array< Float > */ ,(int)offsetof(FlxFrame_obj,blitMatrix),HX_("blitMatrix",56,78,21,d8)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo FlxFrame_obj_sStaticStorageInfo[] = {
	{::hx::fsObject /*  ::openfl::geom::Point */ ,(void *) &FlxFrame_obj::_point,HX_("_point",91,fb,76,c2)},
	{::hx::fsObject /*  ::openfl::geom::Rectangle */ ,(void *) &FlxFrame_obj::_rect,HX_("_rect",03,69,b8,fe)},
	{::hx::fsObject /*  ::flixel::math::FlxMatrix */ ,(void *) &FlxFrame_obj::_matrix,HX_("_matrix",e0,47,3f,2a)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static ::String FlxFrame_obj_sMemberFields[] = {
	HX_("name",4b,72,ff,48),
	HX_("frame",2d,78,83,06),
	HX_("uv",61,66,00,00),
	HX_("parent",2a,05,7e,ed),
	HX_("angle",d3,43,e2,22),
	HX_("flipX",0b,45,92,02),
	HX_("flipY",0c,45,92,02),
	HX_("sourceSize",3c,87,b7,74),
	HX_("offset",93,97,3f,60),
	HX_("duration",54,0f,8e,14),
	HX_("type",ba,f2,08,4d),
	HX_("tileMatrix",0f,0c,5f,20),
	HX_("blitMatrix",56,78,21,d8),
	HX_("cacheFrameMatrix",2c,83,fa,88),
	HX_("prepareBlitMatrix",bd,dc,f9,4c),
	HX_("rotateAndFlip",09,24,e1,45),
	HX_("prepareTransformedBlitMatrix",fa,77,91,f4),
	HX_("prepareMatrix",28,9b,0e,82),
	HX_("fillBlitMatrix",b9,ac,6c,16),
	HX_("paint",9e,b7,4e,bd),
	HX_("paintRotatedAndFlipped",b6,a3,df,c7),
	HX_("checkInputBitmap",b1,8f,20,9b),
	HX_("getDrawFrameRect",d7,c8,6f,02),
	HX_("subFrameTo",68,95,dd,c4),
	HX_("setBorderTo",49,73,59,89),
	HX_("clipTo",6b,0c,58,0a),
	HX_("copyTo",90,1c,33,c9),
	HX_("destroy",fa,2c,86,24),
	HX_("toString",ac,d0,6e,38),
	HX_("set_frame",90,c0,7d,2d),
	::String(null()) };

static void FlxFrame_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxFrame_obj::_point,"_point");
	HX_MARK_MEMBER_NAME(FlxFrame_obj::_rect,"_rect");
	HX_MARK_MEMBER_NAME(FlxFrame_obj::_matrix,"_matrix");
};

#ifdef HXCPP_VISIT_ALLOCS
static void FlxFrame_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxFrame_obj::_point,"_point");
	HX_VISIT_MEMBER_NAME(FlxFrame_obj::_rect,"_rect");
	HX_VISIT_MEMBER_NAME(FlxFrame_obj::_matrix,"_matrix");
};

#endif

::hx::Class FlxFrame_obj::__mClass;

static ::String FlxFrame_obj_sStaticFields[] = {
	HX_("_point",91,fb,76,c2),
	HX_("_rect",03,69,b8,fe),
	HX_("_matrix",e0,47,3f,2a),
	HX_("sort",5e,27,58,4c),
	HX_("sortByName",c0,a1,33,6b),
	::String(null())
};

void FlxFrame_obj::__register()
{
	FlxFrame_obj _hx_dummy;
	FlxFrame_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.graphics.frames.FlxFrame",f2,22,40,51);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxFrame_obj::__GetStatic;
	__mClass->mSetStaticField = &FlxFrame_obj::__SetStatic;
	__mClass->mMarkFunc = FlxFrame_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxFrame_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxFrame_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxFrame_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = FlxFrame_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxFrame_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxFrame_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void FlxFrame_obj::__boot()
{
{
            	HX_GC_STACKFRAME(&_hx_pos_5df8bdd839d6a258_24_boot)
HXDLIN(  24)		_point =  ::openfl::geom::Point_obj::__alloc( HX_CTX ,null(),null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_5df8bdd839d6a258_29_boot)
HXDLIN(  29)		_rect =  ::openfl::geom::Rectangle_obj::__alloc( HX_CTX ,null(),null(),null(),null());
            	}
{
            	HX_GC_STACKFRAME(&_hx_pos_5df8bdd839d6a258_34_boot)
HXDLIN(  34)		_matrix =  ::flixel::math::FlxMatrix_obj::__alloc( HX_CTX ,null(),null(),null(),null(),null(),null());
            	}
}

} // end namespace flixel
} // end namespace graphics
} // end namespace frames