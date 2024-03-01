// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxGame
#include <flixel/FlxGame.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxState
#include <flixel/FlxState.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxBasePoint
#include <flixel/math/FlxBasePoint.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRect
#include <flixel/math/FlxRect.h>
#endif
#ifndef INCLUDED_flixel_system_debug_FlxDebugger
#include <flixel/system/debug/FlxDebugger.h>
#endif
#ifndef INCLUDED_flixel_system_debug_Window
#include <flixel/system/debug/Window.h>
#endif
#ifndef INCLUDED_flixel_system_debug_console_Console
#include <flixel/system/debug/console/Console.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_Interaction
#include <flixel/system/debug/interaction/Interaction.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools_GraphicCursorCross
#include <flixel/system/debug/interaction/tools/GraphicCursorCross.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools_Pointer
#include <flixel/system/debug/interaction/tools/Pointer.h>
#endif
#ifndef INCLUDED_flixel_system_debug_interaction_tools_Tool
#include <flixel/system/debug/interaction/tools/Tool.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_ConsoleFrontEnd
#include <flixel/system/frontEnds/ConsoleFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSpriteUtil
#include <flixel/util/FlxSpriteUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxPooled
#include <flixel/util/IFlxPooled.h>
#endif
#ifndef INCLUDED_openfl_display_BitmapData
#include <openfl/display/BitmapData.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_openfl_display_Graphics
#include <openfl/display/Graphics.h>
#endif
#ifndef INCLUDED_openfl_display_IBitmapDrawable
#include <openfl/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_openfl_display_InteractiveObject
#include <openfl/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_openfl_display_Sprite
#include <openfl/display/Sprite.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_geom_ColorTransform
#include <openfl/geom/ColorTransform.h>
#endif
#ifndef INCLUDED_openfl_geom_Matrix
#include <openfl/geom/Matrix.h>
#endif
#ifndef INCLUDED_openfl_geom_Rectangle
#include <openfl/geom/Rectangle.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_dbe290ee08dc8b7a_22_new,"flixel.system.debug.interaction.tools.Pointer","new",0x18297018,"flixel.system.debug.interaction.tools.Pointer.new","flixel/system/debug/interaction/tools/Pointer.hx",22,0x6c93613b)
HX_LOCAL_STACK_FRAME(_hx_pos_dbe290ee08dc8b7a_30_init,"flixel.system.debug.interaction.tools.Pointer","init",0x08d15c58,"flixel.system.debug.interaction.tools.Pointer.init","flixel/system/debug/interaction/tools/Pointer.hx",30,0x6c93613b)
HX_LOCAL_STACK_FRAME(_hx_pos_dbe290ee08dc8b7a_41_update,"flixel.system.debug.interaction.tools.Pointer","update",0xd4dc8951,"flixel.system.debug.interaction.tools.Pointer.update","flixel/system/debug/interaction/tools/Pointer.hx",41,0x6c93613b)
HX_LOCAL_STACK_FRAME(_hx_pos_dbe290ee08dc8b7a_71_calculateSelectionArea,"flixel.system.debug.interaction.tools.Pointer","calculateSelectionArea",0x6774abfb,"flixel.system.debug.interaction.tools.Pointer.calculateSelectionArea","flixel/system/debug/interaction/tools/Pointer.hx",71,0x6c93613b)
HX_LOCAL_STACK_FRAME(_hx_pos_dbe290ee08dc8b7a_85_startSelection,"flixel.system.debug.interaction.tools.Pointer","startSelection",0x524d52d2,"flixel.system.debug.interaction.tools.Pointer.startSelection","flixel/system/debug/interaction/tools/Pointer.hx",85,0x6c93613b)
HX_LOCAL_STACK_FRAME(_hx_pos_dbe290ee08dc8b7a_96_cancelSelection,"flixel.system.debug.interaction.tools.Pointer","cancelSelection",0xa173bf2a,"flixel.system.debug.interaction.tools.Pointer.cancelSelection","flixel/system/debug/interaction/tools/Pointer.hx",96,0x6c93613b)
HX_LOCAL_STACK_FRAME(_hx_pos_dbe290ee08dc8b7a_107_stopSelection,"flixel.system.debug.interaction.tools.Pointer","stopSelection",0x29b84da2,"flixel.system.debug.interaction.tools.Pointer.stopSelection","flixel/system/debug/interaction/tools/Pointer.hx",107,0x6c93613b)
HX_LOCAL_STACK_FRAME(_hx_pos_dbe290ee08dc8b7a_117_stopSelectionAndFindItems,"flixel.system.debug.interaction.tools.Pointer","stopSelectionAndFindItems",0x6861b3f2,"flixel.system.debug.interaction.tools.Pointer.stopSelectionAndFindItems","flixel/system/debug/interaction/tools/Pointer.hx",117,0x6c93613b)
HX_LOCAL_STACK_FRAME(_hx_pos_dbe290ee08dc8b7a_150_updateConsoleSelection,"flixel.system.debug.interaction.tools.Pointer","updateConsoleSelection",0xdb302166,"flixel.system.debug.interaction.tools.Pointer.updateConsoleSelection","flixel/system/debug/interaction/tools/Pointer.hx",150,0x6c93613b)
HX_LOCAL_STACK_FRAME(_hx_pos_dbe290ee08dc8b7a_159_updateSelectedItems,"flixel.system.debug.interaction.tools.Pointer","updateSelectedItems",0xac580f94,"flixel.system.debug.interaction.tools.Pointer.updateSelectedItems","flixel/system/debug/interaction/tools/Pointer.hx",159,0x6c93613b)
HX_LOCAL_STACK_FRAME(_hx_pos_dbe290ee08dc8b7a_196_draw,"flixel.system.debug.interaction.tools.Pointer","draw",0x05864d4c,"flixel.system.debug.interaction.tools.Pointer.draw","flixel/system/debug/interaction/tools/Pointer.hx",196,0x6c93613b)
namespace flixel{
namespace _hx_system{
namespace debug{
namespace interaction{
namespace tools{

void Pointer_obj::__construct(){
            	HX_GC_STACKFRAME(&_hx_pos_dbe290ee08dc8b7a_22_new)
HXLINE(  27)		this->_selectionArea =  ::flixel::math::FlxRect_obj::__alloc( HX_CTX ,null(),null(),null(),null());
HXLINE(  26)		this->_selectionHappening = false;
HXLINE(  25)		this->_selectionEndPoint =  ::flixel::math::FlxBasePoint_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ));
HXLINE(  24)		this->_selectionStartPoint =  ::flixel::math::FlxBasePoint_obj::__alloc( HX_CTX ,( (Float)(0) ),( (Float)(0) ));
HXLINE(  22)		super::__construct();
            	}

Dynamic Pointer_obj::__CreateEmpty() { return new Pointer_obj; }

void *Pointer_obj::_hx_vtable = 0;

Dynamic Pointer_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Pointer_obj > _hx_result = new Pointer_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Pointer_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1361d5a9) {
		if (inClassId<=(int)0x092403d4) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x092403d4;
			}
		} else {
			return inClassId==(int)0x0c89e854 || inClassId==(int)0x1361d5a9;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}

 ::flixel::_hx_system::debug::interaction::tools::Tool Pointer_obj::init( ::flixel::_hx_system::debug::interaction::Interaction brain){
            	HX_GC_STACKFRAME(&_hx_pos_dbe290ee08dc8b7a_30_init)
HXLINE(  31)		this->super::init(brain);
HXLINE(  33)		this->_name = HX_("Pointer",9d,e8,72,1e);
HXLINE(  34)		this->setButton(::hx::ClassOf< ::flixel::_hx_system::debug::interaction::tools::GraphicCursorCross >());
HXLINE(  35)		this->setCursor( ::flixel::_hx_system::debug::interaction::tools::GraphicCursorCross_obj::__alloc( HX_CTX ,0,0,null(),null()));
HXLINE(  37)		return ::hx::ObjectPtr<OBJ_>(this);
            	}


void Pointer_obj::update(){
            	HX_STACKFRAME(&_hx_pos_dbe290ee08dc8b7a_41_update)
HXLINE(  43)		if (!(this->isActive())) {
HXLINE(  44)			return;
            		}
HXLINE(  46)		bool _hx_tmp;
HXDLIN(  46)		if (this->_brain->pointerJustPressed) {
HXLINE(  46)			_hx_tmp = !(this->_selectionHappening);
            		}
            		else {
HXLINE(  46)			_hx_tmp = false;
            		}
HXDLIN(  46)		if (_hx_tmp) {
HXLINE(  47)			this->startSelection();
            		}
HXLINE(  49)		if (this->_selectionHappening) {
HXLINE(  51)			{
HXLINE(  51)				 ::flixel::math::FlxBasePoint this1 = this->_selectionEndPoint;
HXDLIN(  51)				Float y = this->_brain->flixelPointer->y;
HXDLIN(  51)				this1->set_x(this->_brain->flixelPointer->x);
HXDLIN(  51)				this1->set_y(y);
            			}
HXLINE(  52)			this->calculateSelectionArea();
            		}
HXLINE(  56)		if (!(this->_brain->pointerJustReleased)) {
HXLINE(  57)			return;
            		}
HXLINE(  61)		if (!(this->_selectionHappening)) {
HXLINE(  62)			return;
            		}
HXLINE(  64)		::Array< ::Dynamic> selectedItems = this->stopSelectionAndFindItems();
HXLINE(  65)		bool drewRect;
HXDLIN(  65)		if ((this->_selectionArea->width == 0)) {
HXLINE(  65)			drewRect = (this->_selectionArea->height != 0);
            		}
            		else {
HXLINE(  65)			drewRect = true;
            		}
HXLINE(  67)		this->updateSelectedItems(selectedItems,drewRect);
            	}


void Pointer_obj::calculateSelectionArea(){
            	HX_STACKFRAME(&_hx_pos_dbe290ee08dc8b7a_71_calculateSelectionArea)
HXLINE(  72)		 ::flixel::math::FlxBasePoint start = this->_selectionStartPoint;
HXLINE(  73)		 ::flixel::math::FlxBasePoint end = this->_selectionEndPoint;
HXLINE(  74)		Float _hx_tmp;
HXDLIN(  74)		if ((start->x < end->x)) {
HXLINE(  74)			_hx_tmp = start->x;
            		}
            		else {
HXLINE(  74)			_hx_tmp = end->x;
            		}
HXDLIN(  74)		this->_selectionArea->x = _hx_tmp;
HXLINE(  75)		Float _hx_tmp1;
HXDLIN(  75)		if ((start->y < end->y)) {
HXLINE(  75)			_hx_tmp1 = start->y;
            		}
            		else {
HXLINE(  75)			_hx_tmp1 = end->y;
            		}
HXDLIN(  75)		this->_selectionArea->y = _hx_tmp1;
HXLINE(  76)		{
HXLINE(  76)			 ::flixel::math::FlxRect _this = this->_selectionArea;
HXDLIN(  76)			Float Value;
HXDLIN(  76)			if ((start->x > end->x)) {
HXLINE(  76)				Value = start->x;
            			}
            			else {
HXLINE(  76)				Value = end->x;
            			}
HXDLIN(  76)			_this->width = (Value - _this->x);
            		}
HXLINE(  77)		{
HXLINE(  77)			 ::flixel::math::FlxRect _this1 = this->_selectionArea;
HXDLIN(  77)			Float Value1;
HXDLIN(  77)			if ((start->y > end->y)) {
HXLINE(  77)				Value1 = start->y;
            			}
            			else {
HXLINE(  77)				Value1 = end->y;
            			}
HXDLIN(  77)			_this1->height = (Value1 - _this1->y);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Pointer_obj,calculateSelectionArea,(void))

void Pointer_obj::startSelection(){
            	HX_STACKFRAME(&_hx_pos_dbe290ee08dc8b7a_85_startSelection)
HXLINE(  86)		this->_selectionHappening = true;
HXLINE(  87)		{
HXLINE(  87)			 ::flixel::math::FlxBasePoint this1 = this->_selectionStartPoint;
HXDLIN(  87)			Float y = this->_brain->flixelPointer->y;
HXDLIN(  87)			this1->set_x(this->_brain->flixelPointer->x);
HXDLIN(  87)			this1->set_y(y);
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Pointer_obj,startSelection,(void))

void Pointer_obj::cancelSelection(){
            	HX_STACKFRAME(&_hx_pos_dbe290ee08dc8b7a_96_cancelSelection)
HXLINE(  97)		if (!(this->_selectionHappening)) {
HXLINE(  98)			return;
            		}
HXLINE( 100)		this->stopSelection();
            	}


HX_DEFINE_DYNAMIC_FUNC0(Pointer_obj,cancelSelection,(void))

void Pointer_obj::stopSelection(){
            	HX_STACKFRAME(&_hx_pos_dbe290ee08dc8b7a_107_stopSelection)
HXLINE( 109)		this->_selectionHappening = false;
HXLINE( 110)		{
HXLINE( 110)			 ::flixel::math::FlxRect _this = this->_selectionArea;
HXDLIN( 110)			_this->x = ( (Float)(0) );
HXDLIN( 110)			_this->y = ( (Float)(0) );
HXDLIN( 110)			_this->width = ( (Float)(0) );
HXDLIN( 110)			_this->height = ( (Float)(0) );
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(Pointer_obj,stopSelection,(void))

::Array< ::Dynamic> Pointer_obj::stopSelectionAndFindItems(){
            	HX_STACKFRAME(&_hx_pos_dbe290ee08dc8b7a_117_stopSelectionAndFindItems)
HXLINE( 118)		if (!(this->_selectionHappening)) {
HXLINE( 119)			HX_STACK_DO_THROW(HX_("stopSelectionAndFindItems called when not selecting",90,62,27,3d));
            		}
HXLINE( 121)		{
HXLINE( 121)			 ::flixel::math::FlxBasePoint this1 = this->_selectionEndPoint;
HXDLIN( 121)			Float y = this->_brain->flixelPointer->y;
HXDLIN( 121)			this1->set_x(this->_brain->flixelPointer->x);
HXDLIN( 121)			this1->set_y(y);
            		}
HXLINE( 122)		this->calculateSelectionArea();
HXLINE( 124)		::Array< ::Dynamic> items = null();
HXLINE( 125)		bool _hx_tmp;
HXDLIN( 125)		if ((this->_selectionArea->width == 0)) {
HXLINE( 125)			_hx_tmp = (this->_selectionArea->height != 0);
            		}
            		else {
HXLINE( 125)			_hx_tmp = true;
            		}
HXDLIN( 125)		if (_hx_tmp) {
HXLINE( 127)			items = this->_brain->getItemsWithinState(::flixel::FlxG_obj::game->_state,this->_selectionArea);
            		}
            		else {
HXLINE( 132)			 ::flixel::FlxObject topItem = this->_brain->getTopItemWithinState(::flixel::FlxG_obj::game->_state,this->_selectionArea);
HXLINE( 133)			if (::hx::IsNotNull( topItem )) {
HXLINE( 134)				items = ::Array_obj< ::Dynamic>::__new(1)->init(0,topItem);
            			}
            		}
HXLINE( 137)		this->updateConsoleSelection(items);
HXLINE( 140)		this->stopSelection();
HXLINE( 142)		return items;
            	}


HX_DEFINE_DYNAMIC_FUNC0(Pointer_obj,stopSelectionAndFindItems,return )

void Pointer_obj::updateConsoleSelection(::Array< ::Dynamic> items){
            	HX_STACKFRAME(&_hx_pos_dbe290ee08dc8b7a_150_updateConsoleSelection)
HXDLIN( 150)		 ::flixel::_hx_system::frontEnds::ConsoleFrontEnd _this = ::flixel::FlxG_obj::console;
HXDLIN( 150)		 ::Dynamic object;
HXDLIN( 150)		if (::hx::IsNull( items )) {
HXDLIN( 150)			object = null();
            		}
            		else {
HXDLIN( 150)			switch((int)(items->length)){
            				case (int)0: {
HXDLIN( 150)					object = null();
            				}
            				break;
            				case (int)1: {
HXLINE( 153)					 ::flixel::FlxObject lone = items->__get(0).StaticCast<  ::flixel::FlxObject >();
HXLINE( 150)					object = lone;
            				}
            				break;
            				default:{
HXDLIN( 150)					object = items;
            				}
            			}
            		}
HXDLIN( 150)		::flixel::FlxG_obj::game->debugger->console->registerObject(HX_("selection",4c,f8,1a,8e),object);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Pointer_obj,updateConsoleSelection,(void))

void Pointer_obj::updateSelectedItems(::Array< ::Dynamic> items,bool drewRect){
            	HX_STACKFRAME(&_hx_pos_dbe290ee08dc8b7a_159_updateSelectedItems)
HXLINE( 161)		bool adding = this->_brain->keyPressed(16);
HXLINE( 162)		bool removing;
HXDLIN( 162)		if (this->_brain->keyPressed(18)) {
HXLINE( 162)			removing = !(adding);
            		}
            		else {
HXLINE( 162)			removing = false;
            		}
HXLINE( 166)		bool _hx_tmp;
HXDLIN( 166)		if (!(adding)) {
HXLINE( 166)			_hx_tmp = !(removing);
            		}
            		else {
HXLINE( 166)			_hx_tmp = false;
            		}
HXDLIN( 166)		if (_hx_tmp) {
HXLINE( 167)			this->_brain->clearSelection();
            		}
HXLINE( 169)		bool _hx_tmp1;
HXDLIN( 169)		if (::hx::IsNotNull( items )) {
HXLINE( 169)			_hx_tmp1 = (items->length == 0);
            		}
            		else {
HXLINE( 169)			_hx_tmp1 = true;
            		}
HXDLIN( 169)		if (_hx_tmp1) {
HXLINE( 170)			return;
            		}
HXLINE( 172)		 ::flixel::group::FlxTypedGroup prevSelectedItems = this->_brain->selectedItems;
HXLINE( 173)		bool _hx_tmp2;
HXDLIN( 173)		bool _hx_tmp3;
HXDLIN( 173)		if (adding) {
HXLINE( 173)			_hx_tmp3 = !(drewRect);
            		}
            		else {
HXLINE( 173)			_hx_tmp3 = false;
            		}
HXDLIN( 173)		if (_hx_tmp3) {
HXLINE( 173)			_hx_tmp2 = (items->length == 1);
            		}
            		else {
HXLINE( 173)			_hx_tmp2 = false;
            		}
HXDLIN( 173)		if (_hx_tmp2) {
HXLINE( 175)			 ::flixel::FlxObject item = items->__get(0).StaticCast<  ::flixel::FlxObject >();
HXLINE( 177)			if (prevSelectedItems->members->contains(item)) {
HXLINE( 178)				prevSelectedItems->remove(item,null()).StaticCast<  ::flixel::FlxObject >();
            			}
            			else {
HXLINE( 180)				prevSelectedItems->add(item).StaticCast<  ::flixel::FlxObject >();
            			}
            		}
            		else {
HXLINE( 182)			if (removing) {
HXLINE( 184)				int _g = 0;
HXDLIN( 184)				while((_g < items->length)){
HXLINE( 184)					 ::flixel::FlxObject item1 = items->__get(_g).StaticCast<  ::flixel::FlxObject >();
HXDLIN( 184)					_g = (_g + 1);
HXLINE( 185)					prevSelectedItems->remove(item1,null()).StaticCast<  ::flixel::FlxObject >();
            				}
            			}
            			else {
HXLINE( 190)				int _g1 = 0;
HXDLIN( 190)				while((_g1 < items->length)){
HXLINE( 190)					 ::flixel::FlxObject item2 = items->__get(_g1).StaticCast<  ::flixel::FlxObject >();
HXDLIN( 190)					_g1 = (_g1 + 1);
HXLINE( 191)					prevSelectedItems->add(item2).StaticCast<  ::flixel::FlxObject >();
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(Pointer_obj,updateSelectedItems,(void))

void Pointer_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_dbe290ee08dc8b7a_196_draw)
HXLINE( 197)		 ::openfl::display::Graphics gfx = this->_brain->getDebugGraphics();
HXLINE( 198)		if (::hx::IsNull( gfx )) {
HXLINE( 199)			return;
            		}
HXLINE( 201)		if (this->_selectionHappening) {
HXLINE( 204)			gfx->lineStyle(((Float)0.9),12255232,null(),null(),null(),null(),null(),null());
HXLINE( 205)			gfx->drawRect((this->_selectionArea->x - ::flixel::FlxG_obj::camera->scroll->x),(this->_selectionArea->y - ::flixel::FlxG_obj::camera->scroll->y),this->_selectionArea->width,this->_selectionArea->height);
            		}
HXLINE( 209)		if (::flixel::FlxG_obj::renderBlit) {
HXLINE( 210)			::flixel::FlxG_obj::camera->buffer->draw(::flixel::util::FlxSpriteUtil_obj::flashGfxSprite,null(),null(),null(),null(),null());
            		}
            	}



::hx::ObjectPtr< Pointer_obj > Pointer_obj::__new() {
	::hx::ObjectPtr< Pointer_obj > __this = new Pointer_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< Pointer_obj > Pointer_obj::__alloc(::hx::Ctx *_hx_ctx) {
	Pointer_obj *__this = (Pointer_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Pointer_obj), true, "flixel.system.debug.interaction.tools.Pointer"));
	*(void **)__this = Pointer_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

Pointer_obj::Pointer_obj()
{
}

void Pointer_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Pointer);
	HX_MARK_MEMBER_NAME(_selectionStartPoint,"_selectionStartPoint");
	HX_MARK_MEMBER_NAME(_selectionEndPoint,"_selectionEndPoint");
	HX_MARK_MEMBER_NAME(_selectionHappening,"_selectionHappening");
	HX_MARK_MEMBER_NAME(_selectionArea,"_selectionArea");
	 ::flixel::_hx_system::debug::interaction::tools::Tool_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Pointer_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_selectionStartPoint,"_selectionStartPoint");
	HX_VISIT_MEMBER_NAME(_selectionEndPoint,"_selectionEndPoint");
	HX_VISIT_MEMBER_NAME(_selectionHappening,"_selectionHappening");
	HX_VISIT_MEMBER_NAME(_selectionArea,"_selectionArea");
	 ::flixel::_hx_system::debug::interaction::tools::Tool_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val Pointer_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return ::hx::Val( init_dyn() ); }
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stopSelection") ) { return ::hx::Val( stopSelection_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_selectionArea") ) { return ::hx::Val( _selectionArea ); }
		if (HX_FIELD_EQ(inName,"startSelection") ) { return ::hx::Val( startSelection_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"cancelSelection") ) { return ::hx::Val( cancelSelection_dyn() ); }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_selectionEndPoint") ) { return ::hx::Val( _selectionEndPoint ); }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_selectionHappening") ) { return ::hx::Val( _selectionHappening ); }
		if (HX_FIELD_EQ(inName,"updateSelectedItems") ) { return ::hx::Val( updateSelectedItems_dyn() ); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_selectionStartPoint") ) { return ::hx::Val( _selectionStartPoint ); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"calculateSelectionArea") ) { return ::hx::Val( calculateSelectionArea_dyn() ); }
		if (HX_FIELD_EQ(inName,"updateConsoleSelection") ) { return ::hx::Val( updateConsoleSelection_dyn() ); }
		break;
	case 25:
		if (HX_FIELD_EQ(inName,"stopSelectionAndFindItems") ) { return ::hx::Val( stopSelectionAndFindItems_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val Pointer_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 14:
		if (HX_FIELD_EQ(inName,"_selectionArea") ) { _selectionArea=inValue.Cast<  ::flixel::math::FlxRect >(); return inValue; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"_selectionEndPoint") ) { _selectionEndPoint=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
		break;
	case 19:
		if (HX_FIELD_EQ(inName,"_selectionHappening") ) { _selectionHappening=inValue.Cast< bool >(); return inValue; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"_selectionStartPoint") ) { _selectionStartPoint=inValue.Cast<  ::flixel::math::FlxBasePoint >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Pointer_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("_selectionStartPoint",fb,76,39,85));
	outFields->push(HX_("_selectionEndPoint",a2,cb,d2,26));
	outFields->push(HX_("_selectionHappening",73,62,99,62));
	outFields->push(HX_("_selectionArea",3a,b6,0a,2f));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Pointer_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(Pointer_obj,_selectionStartPoint),HX_("_selectionStartPoint",fb,76,39,85)},
	{::hx::fsObject /*  ::flixel::math::FlxBasePoint */ ,(int)offsetof(Pointer_obj,_selectionEndPoint),HX_("_selectionEndPoint",a2,cb,d2,26)},
	{::hx::fsBool,(int)offsetof(Pointer_obj,_selectionHappening),HX_("_selectionHappening",73,62,99,62)},
	{::hx::fsObject /*  ::flixel::math::FlxRect */ ,(int)offsetof(Pointer_obj,_selectionArea),HX_("_selectionArea",3a,b6,0a,2f)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Pointer_obj_sStaticStorageInfo = 0;
#endif

static ::String Pointer_obj_sMemberFields[] = {
	HX_("_selectionStartPoint",fb,76,39,85),
	HX_("_selectionEndPoint",a2,cb,d2,26),
	HX_("_selectionHappening",73,62,99,62),
	HX_("_selectionArea",3a,b6,0a,2f),
	HX_("init",10,3b,bb,45),
	HX_("update",09,86,05,87),
	HX_("calculateSelectionArea",b3,98,94,0b),
	HX_("startSelection",8a,c7,55,ad),
	HX_("cancelSelection",72,6b,d1,ed),
	HX_("stopSelection",ea,d7,28,51),
	HX_("stopSelectionAndFindItems",3a,8a,9c,59),
	HX_("updateConsoleSelection",1e,0e,50,7f),
	HX_("updateSelectedItems",dc,7f,d5,4b),
	HX_("draw",04,2c,70,42),
	::String(null()) };

::hx::Class Pointer_obj::__mClass;

void Pointer_obj::__register()
{
	Pointer_obj _hx_dummy;
	Pointer_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.system.debug.interaction.tools.Pointer",26,c4,01,fa);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Pointer_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Pointer_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Pointer_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Pointer_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace system
} // end namespace debug
} // end namespace interaction
} // end namespace tools
