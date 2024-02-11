#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flixel_FlxBasic
#include <flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_flixel_FlxCamera
#include <flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_FlxObject
#include <flixel/FlxObject.h>
#endif
#ifndef INCLUDED_flixel_FlxSprite
#include <flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroup
#include <flixel/group/FlxTypedGroup.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedGroupIterator
#include <flixel/group/FlxTypedGroupIterator.h>
#endif
#ifndef INCLUDED_flixel_group_FlxTypedSpriteGroup
#include <flixel/group/FlxTypedSpriteGroup.h>
#endif
#ifndef INCLUDED_flixel_math_FlxRandom
#include <flixel/math/FlxRandom.h>
#endif
#ifndef INCLUDED_flixel_system_debug_log_LogStyle
#include <flixel/system/debug/log/LogStyle.h>
#endif
#ifndef INCLUDED_flixel_system_frontEnds_LogFrontEnd
#include <flixel/system/frontEnds/LogFrontEnd.h>
#endif
#ifndef INCLUDED_flixel_util_FlxArrayUtil
#include <flixel/util/FlxArrayUtil.h>
#endif
#ifndef INCLUDED_flixel_util_FlxDestroyUtil
#include <flixel/util/FlxDestroyUtil.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxSignal
#include <flixel/util/IFlxSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxBaseSignal
#include <flixel/util/_FlxSignal/FlxBaseSignal.h>
#endif
#ifndef INCLUDED_flixel_util__FlxSignal_FlxSignal1
#include <flixel/util/_FlxSignal/FlxSignal1.h>
#endif
#ifndef INCLUDED_haxe_iterators_ArrayKeyValueIterator
#include <haxe/iterators/ArrayKeyValueIterator.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_22_new,"flixel.group.FlxTypedGroup","new",0x9772c4d8,"flixel.group.FlxTypedGroup.new","flixel/group/FlxGroup.hx",22,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_114_destroy,"flixel.group.FlxTypedGroup","destroy",0x8044bd72,"flixel.group.FlxTypedGroup.destroy","flixel/group/FlxGroup.hx",114,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_141_update,"flixel.group.FlxTypedGroup","update",0x4e08ac91,"flixel.group.FlxTypedGroup.update","flixel/group/FlxGroup.hx",141,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_160_draw,"flixel.group.FlxTypedGroup","draw",0xe667208c,"flixel.group.FlxTypedGroup.draw","flixel/group/FlxGroup.hx",160,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_187_add,"flixel.group.FlxTypedGroup","add",0x9768e699,"flixel.group.FlxTypedGroup.add","flixel/group/FlxGroup.hx",187,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_242_insert,"flixel.group.FlxTypedGroup","insert",0x64e069c1,"flixel.group.FlxTypedGroup.insert","flixel/group/FlxGroup.hx",242,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_304_recycle,"flixel.group.FlxTypedGroup","recycle",0x934aa08b,"flixel.group.FlxTypedGroup.recycle","flixel/group/FlxGroup.hx",304,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_356_remove,"flixel.group.FlxTypedGroup","remove",0xcb8bc2cc,"flixel.group.FlxTypedGroup.remove","flixel/group/FlxGroup.hx",356,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_388_replace,"flixel.group.FlxTypedGroup","replace",0x06e6d8ac,"flixel.group.FlxTypedGroup.replace","flixel/group/FlxGroup.hx",388,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_416_sort,"flixel.group.FlxTypedGroup","sort",0xf04f1be6,"flixel.group.FlxTypedGroup.sort","flixel/group/FlxGroup.hx",416,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_426_getFirst,"flixel.group.FlxTypedGroup","getFirst",0x4b746042,"flixel.group.FlxTypedGroup.getFirst","flixel/group/FlxGroup.hx",426,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_430_getFirstHelper,"flixel.group.FlxTypedGroup","getFirstHelper",0x5867ef50,"flixel.group.FlxTypedGroup.getFirstHelper","flixel/group/FlxGroup.hx",430,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_449_getLast,"flixel.group.FlxTypedGroup","getLast",0x75ee4a84,"flixel.group.FlxTypedGroup.getLast","flixel/group/FlxGroup.hx",449,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_470_getFirstIndex,"flixel.group.FlxTypedGroup","getFirstIndex",0xa77f7b70,"flixel.group.FlxTypedGroup.getFirstIndex","flixel/group/FlxGroup.hx",470,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_489_getLastIndex,"flixel.group.FlxTypedGroup","getLastIndex",0xcc6321ee,"flixel.group.FlxTypedGroup.getLastIndex","flixel/group/FlxGroup.hx",489,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_510_any,"flixel.group.FlxTypedGroup","any",0x9768ef64,"flixel.group.FlxTypedGroup.any","flixel/group/FlxGroup.hx",510,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_525_every,"flixel.group.FlxTypedGroup","every",0x49e3ce13,"flixel.group.FlxTypedGroup.every","flixel/group/FlxGroup.hx",525,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_544_getFirstAvailable,"flixel.group.FlxTypedGroup","getFirstAvailable",0x3f88c127,"flixel.group.FlxTypedGroup.getFirstAvailable","flixel/group/FlxGroup.hx",544,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_568_getFirstNull,"flixel.group.FlxTypedGroup","getFirstNull",0xc17e73e9,"flixel.group.FlxTypedGroup.getFirstNull","flixel/group/FlxGroup.hx",568,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_579_getFirstExisting,"flixel.group.FlxTypedGroup","getFirstExisting",0x314444ed,"flixel.group.FlxTypedGroup.getFirstExisting","flixel/group/FlxGroup.hx",579,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_590_getFirstAlive,"flixel.group.FlxTypedGroup","getFirstAlive",0x0afc442b,"flixel.group.FlxTypedGroup.getFirstAlive","flixel/group/FlxGroup.hx",590,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_601_getFirstDead,"flixel.group.FlxTypedGroup","getFirstDead",0xbad62406,"flixel.group.FlxTypedGroup.getFirstDead","flixel/group/FlxGroup.hx",601,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_610_countLiving,"flixel.group.FlxTypedGroup","countLiving",0x0ee705d0,"flixel.group.FlxTypedGroup.countLiving","flixel/group/FlxGroup.hx",610,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_633_countDead,"flixel.group.FlxTypedGroup","countDead",0x0964718b,"flixel.group.FlxTypedGroup.countDead","flixel/group/FlxGroup.hx",633,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_659_getRandom,"flixel.group.FlxTypedGroup","getRandom",0xe8c349b1,"flixel.group.FlxTypedGroup.getRandom","flixel/group/FlxGroup.hx",659,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_673_clear,"flixel.group.FlxTypedGroup","clear",0x1c7a7405,"flixel.group.FlxTypedGroup.clear","flixel/group/FlxGroup.hx",673,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_694_killMembers,"flixel.group.FlxTypedGroup","killMembers",0xa0bff153,"flixel.group.FlxTypedGroup.killMembers","flixel/group/FlxGroup.hx",694,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_706_kill,"flixel.group.FlxTypedGroup","kill",0xeb00d426,"flixel.group.FlxTypedGroup.kill","flixel/group/FlxGroup.hx",706,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_718_reviveMembers,"flixel.group.FlxTypedGroup","reviveMembers",0x4857b97c,"flixel.group.FlxTypedGroup.reviveMembers","flixel/group/FlxGroup.hx",718,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_729_revive,"flixel.group.FlxTypedGroup","revive",0xd17a20dd,"flixel.group.FlxTypedGroup.revive","flixel/group/FlxGroup.hx",729,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_740_iterator,"flixel.group.FlxTypedGroup","iterator",0x7e9a2276,"flixel.group.FlxTypedGroup.iterator","flixel/group/FlxGroup.hx",740,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_748_keyValueIterator,"flixel.group.FlxTypedGroup","keyValueIterator",0x8dc66de8,"flixel.group.FlxTypedGroup.keyValueIterator","flixel/group/FlxGroup.hx",748,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_759_forEach,"flixel.group.FlxTypedGroup","forEach",0x207cba22,"flixel.group.FlxTypedGroup.forEach","flixel/group/FlxGroup.hx",759,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_783_forEachAlive,"flixel.group.FlxTypedGroup","forEachAlive",0x4c021e4b,"flixel.group.FlxTypedGroup.forEachAlive","flixel/group/FlxGroup.hx",783,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_807_forEachDead,"flixel.group.FlxTypedGroup","forEachDead",0x5740ede6,"flixel.group.FlxTypedGroup.forEachDead","flixel/group/FlxGroup.hx",807,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_831_forEachExists,"flixel.group.FlxTypedGroup","forEachExists",0xb812919e,"flixel.group.FlxTypedGroup.forEachExists","flixel/group/FlxGroup.hx",831,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_856_forEachOfType,"flixel.group.FlxTypedGroup","forEachOfType",0x4c90cb33,"flixel.group.FlxTypedGroup.forEachOfType","flixel/group/FlxGroup.hx",856,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_875_set_maxSize,"flixel.group.FlxTypedGroup","set_maxSize",0x3b478d20,"flixel.group.FlxTypedGroup.set_maxSize","flixel/group/FlxGroup.hx",875,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_904_get_memberAdded,"flixel.group.FlxTypedGroup","get_memberAdded",0xd5201c15,"flixel.group.FlxTypedGroup.get_memberAdded","flixel/group/FlxGroup.hx",904,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_913_get_memberRemoved,"flixel.group.FlxTypedGroup","get_memberRemoved",0xd0fca635,"flixel.group.FlxTypedGroup.get_memberRemoved","flixel/group/FlxGroup.hx",913,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_26_resolveGroup,"flixel.group.FlxTypedGroup","resolveGroup",0x84c4b53b,"flixel.group.FlxTypedGroup.resolveGroup","flixel/group/FlxGroup.hx",26,0x1e89d58e)
HX_LOCAL_STACK_FRAME(_hx_pos_bfa1de30d9ec9fbd_45_resolveSelectionGroup,"flixel.group.FlxTypedGroup","resolveSelectionGroup",0xf45975d7,"flixel.group.FlxTypedGroup.resolveSelectionGroup","flixel/group/FlxGroup.hx",45,0x1e89d58e)
namespace flixel{
namespace group{

void FlxTypedGroup_obj::__construct(::hx::Null< int >  __o_MaxSize){
            		int MaxSize = __o_MaxSize.Default(0);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_22_new)
HXLINE(  89)		this->_marker = 0;
HXLINE(  62)		this->length = 0;
HXLINE(  96)		super::__construct();
HXLINE(  98)		this->members = ::cpp::VirtualArray_obj::__new(0);
HXLINE(  99)		this->set_maxSize(::Std_obj::_hx_int(::Math_obj::abs(( (Float)(MaxSize) ))));
HXLINE( 100)		this->flixelType = 2;
            	}

Dynamic FlxTypedGroup_obj::__CreateEmpty() { return new FlxTypedGroup_obj; }

void *FlxTypedGroup_obj::_hx_vtable = 0;

Dynamic FlxTypedGroup_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FlxTypedGroup_obj > _hx_result = new FlxTypedGroup_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FlxTypedGroup_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x62817b24) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x62817b24;
	} else {
		return inClassId==(int)0x7ccf8994;
	}
}

void FlxTypedGroup_obj::destroy(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_114_destroy)
HXLINE( 115)		this->super::destroy();
HXLINE( 117)		::flixel::util::FlxDestroyUtil_obj::destroy(this->_memberAdded);
HXLINE( 118)		::flixel::util::FlxDestroyUtil_obj::destroy(this->_memberRemoved);
HXLINE( 120)		if (::hx::IsNotNull( this->members )) {
HXLINE( 122)			int i = 0;
HXLINE( 123)			 ::flixel::FlxBasic basic = null();
HXLINE( 125)			while((i < this->length)){
HXLINE( 127)				i = (i + 1);
HXDLIN( 127)				basic = ( ( ::flixel::FlxBasic)(this->members->__get((i - 1))) );
HXLINE( 129)				if (::hx::IsNotNull( basic )) {
HXLINE( 130)					basic->destroy();
            				}
            			}
HXLINE( 133)			this->members = null();
            		}
            	}


void FlxTypedGroup_obj::update(Float elapsed){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_141_update)
HXLINE( 142)		int i = 0;
HXLINE( 143)		 ::flixel::FlxBasic basic = null();
HXLINE( 145)		while((i < this->length)){
HXLINE( 147)			i = (i + 1);
HXDLIN( 147)			basic = ( ( ::flixel::FlxBasic)(this->members->__get((i - 1))) );
HXLINE( 149)			bool _hx_tmp;
HXDLIN( 149)			bool _hx_tmp1;
HXDLIN( 149)			if (::hx::IsNotNull( basic )) {
HXLINE( 149)				_hx_tmp1 = basic->exists;
            			}
            			else {
HXLINE( 149)				_hx_tmp1 = false;
            			}
HXDLIN( 149)			if (_hx_tmp1) {
HXLINE( 149)				_hx_tmp = basic->active;
            			}
            			else {
HXLINE( 149)				_hx_tmp = false;
            			}
HXDLIN( 149)			if (_hx_tmp) {
HXLINE( 151)				basic->update(elapsed);
            			}
            		}
            	}


void FlxTypedGroup_obj::draw(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_160_draw)
HXLINE( 161)		::Array< ::Dynamic> oldDefaultCameras = ::flixel::FlxCamera_obj::_defaultCameras;
HXLINE( 162)		if (::hx::IsNotNull( this->get_cameras() )) {
HXLINE( 164)			::flixel::FlxCamera_obj::_defaultCameras = this->get_cameras();
            		}
HXLINE( 167)		{
HXLINE( 167)			int _g = 0;
HXDLIN( 167)			::cpp::VirtualArray _g1 = this->members;
HXDLIN( 167)			while((_g < _g1->get_length())){
HXLINE( 167)				 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 167)				_g = (_g + 1);
HXLINE( 169)				bool _hx_tmp;
HXDLIN( 169)				bool _hx_tmp1;
HXDLIN( 169)				if (::hx::IsNotNull( basic )) {
HXLINE( 169)					_hx_tmp1 = ( ( ::flixel::FlxBasic)(basic) )->exists;
            				}
            				else {
HXLINE( 169)					_hx_tmp1 = false;
            				}
HXDLIN( 169)				if (_hx_tmp1) {
HXLINE( 169)					_hx_tmp = ( ( ::flixel::FlxBasic)(basic) )->visible;
            				}
            				else {
HXLINE( 169)					_hx_tmp = false;
            				}
HXDLIN( 169)				if (_hx_tmp) {
HXLINE( 170)					( ( ::flixel::FlxBasic)(basic) )->draw();
            				}
            			}
            		}
HXLINE( 173)		::flixel::FlxCamera_obj::_defaultCameras = oldDefaultCameras;
            	}


 ::Dynamic FlxTypedGroup_obj::add( ::Dynamic basic){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_187_add)
HXLINE( 188)		if (::hx::IsNull( basic )) {
HXLINE( 190)			::flixel::FlxG_obj::log->advanced(HX_("Cannot add a `null` object to a FlxGroup.",f2,f4,c0,70),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
HXLINE( 191)			return null();
            		}
HXLINE( 195)		if ((this->members->indexOf(basic,null()) >= 0)) {
HXLINE( 196)			return basic;
            		}
HXLINE( 199)		int index = this->getFirstNull();
HXLINE( 200)		if ((index != -1)) {
HXLINE( 202)			this->members->set(index,basic);
HXLINE( 204)			if ((index >= this->length)) {
HXLINE( 206)				this->length = (index + 1);
            			}
HXLINE( 209)			if (::hx::IsNotNull( this->_memberAdded )) {
HXLINE( 210)				this->_memberAdded->dispatch(basic);
            			}
HXLINE( 212)			return basic;
            		}
HXLINE( 216)		bool _hx_tmp;
HXDLIN( 216)		if ((this->maxSize > 0)) {
HXLINE( 216)			_hx_tmp = (this->length >= this->maxSize);
            		}
            		else {
HXLINE( 216)			_hx_tmp = false;
            		}
HXDLIN( 216)		if (_hx_tmp) {
HXLINE( 217)			return basic;
            		}
HXLINE( 220)		this->members->push(basic);
HXLINE( 221)		this->length++;
HXLINE( 223)		if (::hx::IsNotNull( this->_memberAdded )) {
HXLINE( 224)			this->_memberAdded->dispatch(basic);
            		}
HXLINE( 226)		return basic;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,add,return )

 ::Dynamic FlxTypedGroup_obj::insert(int position, ::Dynamic object){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_242_insert)
HXLINE( 243)		if (::hx::IsNull( object )) {
HXLINE( 245)			::flixel::FlxG_obj::log->advanced(HX_("Cannot insert a `null` object into a FlxGroup.",a5,36,f4,8f),::flixel::_hx_system::debug::log::LogStyle_obj::WARNING,true);
HXLINE( 246)			return null();
            		}
HXLINE( 250)		if ((this->members->indexOf(object,null()) >= 0)) {
HXLINE( 251)			return object;
            		}
HXLINE( 254)		bool _hx_tmp;
HXDLIN( 254)		if ((position < this->length)) {
HXLINE( 254)			_hx_tmp = ::hx::IsNull( this->members->__get(position) );
            		}
            		else {
HXLINE( 254)			_hx_tmp = false;
            		}
HXDLIN( 254)		if (_hx_tmp) {
HXLINE( 256)			this->members->set(position,object);
HXLINE( 258)			if (::hx::IsNotNull( this->_memberAdded )) {
HXLINE( 259)				this->_memberAdded->dispatch(object);
            			}
HXLINE( 261)			return object;
            		}
HXLINE( 265)		bool _hx_tmp1;
HXDLIN( 265)		if ((this->maxSize > 0)) {
HXLINE( 265)			_hx_tmp1 = (this->length >= this->maxSize);
            		}
            		else {
HXLINE( 265)			_hx_tmp1 = false;
            		}
HXDLIN( 265)		if (_hx_tmp1) {
HXLINE( 266)			return object;
            		}
HXLINE( 269)		this->members->insert(position,object);
HXLINE( 270)		this->length++;
HXLINE( 272)		if (::hx::IsNotNull( this->_memberAdded )) {
HXLINE( 273)			this->_memberAdded->dispatch(object);
            		}
HXLINE( 275)		return object;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,insert,return )

 ::Dynamic FlxTypedGroup_obj::recycle(::hx::Class objectClass, ::Dynamic objectFactory,::hx::Null< bool >  __o_force,::hx::Null< bool >  __o_revive){
            		bool force = __o_force.Default(false);
            		bool revive = __o_revive.Default(true);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_304_recycle)
HXDLIN( 304)		 ::flixel::group::FlxTypedGroup _gthis = ::hx::ObjectPtr<OBJ_>(this);
HXLINE( 317)		if ((this->maxSize > 0)) {
HXLINE( 320)			if ((this->length < this->maxSize)) {
HXLINE( 321)				 ::Dynamic _hx_tmp;
HXDLIN( 321)				if (::hx::IsNotNull( objectFactory )) {
HXLINE( 321)					_hx_tmp = _gthis->add(objectFactory());
            				}
            				else {
HXLINE( 321)					if (::hx::IsNotNull( objectClass )) {
HXLINE( 321)						_hx_tmp = _gthis->add(::Type_obj::createInstance(objectClass,::cpp::VirtualArray_obj::__new(0)));
            					}
            					else {
HXLINE( 321)						_hx_tmp = null();
            					}
            				}
HXDLIN( 321)				return _hx_tmp;
            			}
HXLINE( 324)			 ::Dynamic basic = this->members->__get(this->_marker++);
HXLINE( 326)			if ((this->_marker >= this->maxSize)) {
HXLINE( 327)				this->_marker = 0;
            			}
HXLINE( 329)			if (revive) {
HXLINE( 330)				( ( ::flixel::FlxBasic)(basic) )->revive();
            			}
HXLINE( 332)			return basic;
            		}
HXLINE( 336)		 ::Dynamic basic = this->getFirstAvailable(objectClass,force);
HXLINE( 338)		if (::hx::IsNotNull( basic )) {
HXLINE( 340)			if (revive) {
HXLINE( 341)				( ( ::flixel::FlxBasic)(basic) )->revive();
            			}
HXLINE( 342)			return basic;
            		}
HXLINE( 345)		 ::Dynamic _hx_tmp;
HXDLIN( 345)		if (::hx::IsNotNull( objectFactory )) {
HXLINE( 345)			_hx_tmp = _gthis->add(objectFactory());
            		}
            		else {
HXLINE( 345)			if (::hx::IsNotNull( objectClass )) {
HXLINE( 345)				_hx_tmp = _gthis->add(::Type_obj::createInstance(objectClass,::cpp::VirtualArray_obj::__new(0)));
            			}
            			else {
HXLINE( 345)				_hx_tmp = null();
            			}
            		}
HXDLIN( 345)		return _hx_tmp;
            	}


HX_DEFINE_DYNAMIC_FUNC4(FlxTypedGroup_obj,recycle,return )

 ::Dynamic FlxTypedGroup_obj::remove( ::Dynamic basic,::hx::Null< bool >  __o_splice){
            		bool splice = __o_splice.Default(false);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_356_remove)
HXLINE( 357)		if (::hx::IsNull( this->members )) {
HXLINE( 358)			return null();
            		}
HXLINE( 360)		int index = this->members->indexOf(basic,null());
HXLINE( 362)		if ((index < 0)) {
HXLINE( 363)			return null();
            		}
HXLINE( 365)		if (splice) {
HXLINE( 367)			this->members->splice(index,1);
HXLINE( 368)			this->length--;
            		}
            		else {
HXLINE( 371)			this->members->set(index,null());
            		}
HXLINE( 373)		if (::hx::IsNotNull( this->_memberRemoved )) {
HXLINE( 374)			this->_memberRemoved->dispatch(basic);
            		}
HXLINE( 376)		return basic;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,remove,return )

 ::Dynamic FlxTypedGroup_obj::replace( ::Dynamic oldObject, ::Dynamic newObject){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_388_replace)
HXLINE( 389)		int index = this->members->indexOf(oldObject,null());
HXLINE( 391)		if ((index < 0)) {
HXLINE( 392)			return null();
            		}
HXLINE( 394)		this->members->set(index,newObject);
HXLINE( 396)		if (::hx::IsNotNull( this->_memberRemoved )) {
HXLINE( 397)			this->_memberRemoved->dispatch(oldObject);
            		}
HXLINE( 398)		if (::hx::IsNotNull( this->_memberAdded )) {
HXLINE( 399)			this->_memberAdded->dispatch(newObject);
            		}
HXLINE( 401)		return newObject;
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,replace,return )

void FlxTypedGroup_obj::sort( ::Dynamic func,::hx::Null< int >  __o_order){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,int,a1, ::Dynamic,_g) HXARGC(2)
            		int _hx_run( ::Dynamic a2, ::Dynamic a3){
            			HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_416_sort)
HXDLIN( 416)			return ( (int)(_g(a1,a2,a3)) );
            		}
            		HX_END_LOCAL_FUNC2(return)

            		int order = __o_order.Default(-1);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_416_sort)
HXDLIN( 416)		 ::Dynamic _g = func;
HXDLIN( 416)		int a1 = order;
HXDLIN( 416)		 ::Dynamic _hx_tmp =  ::Dynamic(new _hx_Closure_0(a1,_g));
HXDLIN( 416)		this->members->sort(_hx_tmp);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,sort,(void))

 ::Dynamic FlxTypedGroup_obj::getFirst( ::Dynamic func){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_426_getFirst)
HXDLIN( 426)		 ::Dynamic result = null();
HXDLIN( 426)		{
HXDLIN( 426)			int _g = 0;
HXDLIN( 426)			::cpp::VirtualArray _g1 = this->members;
HXDLIN( 426)			while((_g < _g1->get_length())){
HXDLIN( 426)				 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 426)				_g = (_g + 1);
HXDLIN( 426)				bool _hx_tmp;
HXDLIN( 426)				if (::hx::IsNotNull( basic )) {
HXDLIN( 426)					_hx_tmp = ( (bool)(func(basic)) );
            				}
            				else {
HXDLIN( 426)					_hx_tmp = false;
            				}
HXDLIN( 426)				if (_hx_tmp) {
HXDLIN( 426)					result = basic;
HXDLIN( 426)					goto _hx_goto_14;
            				}
            			}
            			_hx_goto_14:;
            		}
HXDLIN( 426)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,getFirst,return )

 ::Dynamic FlxTypedGroup_obj::getFirstHelper( ::Dynamic func){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_430_getFirstHelper)
HXLINE( 431)		 ::Dynamic result = null();
HXLINE( 432)		{
HXLINE( 432)			int _g = 0;
HXDLIN( 432)			::cpp::VirtualArray _g1 = this->members;
HXDLIN( 432)			while((_g < _g1->get_length())){
HXLINE( 432)				 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 432)				_g = (_g + 1);
HXLINE( 434)				bool _hx_tmp;
HXDLIN( 434)				if (::hx::IsNotNull( basic )) {
HXLINE( 434)					_hx_tmp = ( (bool)(func(basic)) );
            				}
            				else {
HXLINE( 434)					_hx_tmp = false;
            				}
HXDLIN( 434)				if (_hx_tmp) {
HXLINE( 436)					result = basic;
HXLINE( 437)					goto _hx_goto_16;
            				}
            			}
            			_hx_goto_16:;
            		}
HXLINE( 440)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,getFirstHelper,return )

 ::Dynamic FlxTypedGroup_obj::getLast( ::Dynamic func){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_449_getLast)
HXLINE( 450)		 ::Dynamic result = null();
HXLINE( 451)		int i = this->members->get_length();
HXLINE( 452)		while(true){
HXLINE( 452)			i = (i - 1);
HXDLIN( 452)			if (!(((i + 1) > 0))) {
HXLINE( 452)				goto _hx_goto_18;
            			}
HXLINE( 454)			 ::Dynamic basic = this->members->__get(i);
HXLINE( 455)			bool _hx_tmp;
HXDLIN( 455)			if (::hx::IsNotNull( basic )) {
HXLINE( 455)				_hx_tmp = ( (bool)(func(basic)) );
            			}
            			else {
HXLINE( 455)				_hx_tmp = false;
            			}
HXDLIN( 455)			if (_hx_tmp) {
HXLINE( 457)				result = basic;
HXLINE( 458)				goto _hx_goto_18;
            			}
            		}
            		_hx_goto_18:;
HXLINE( 461)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,getLast,return )

int FlxTypedGroup_obj::getFirstIndex( ::Dynamic func){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_470_getFirstIndex)
HXLINE( 471)		int result = -1;
HXLINE( 472)		{
HXLINE( 472)			int _g_current = 0;
HXDLIN( 472)			::cpp::VirtualArray _g_array = this->members;
HXDLIN( 472)			while((_g_current < _g_array->get_length())){
HXLINE( 472)				 ::Dynamic _g1_value = _g_array->__get(_g_current);
HXDLIN( 472)				_g_current = (_g_current + 1);
HXDLIN( 472)				int _g1_key = (_g_current - 1);
HXDLIN( 472)				int i = _g1_key;
HXDLIN( 472)				 ::Dynamic basic = _g1_value;
HXLINE( 474)				bool _hx_tmp;
HXDLIN( 474)				if (::hx::IsNotNull( basic )) {
HXLINE( 474)					_hx_tmp = ( (bool)(func(basic)) );
            				}
            				else {
HXLINE( 474)					_hx_tmp = false;
            				}
HXDLIN( 474)				if (_hx_tmp) {
HXLINE( 476)					result = i;
HXLINE( 477)					goto _hx_goto_20;
            				}
            			}
            			_hx_goto_20:;
            		}
HXLINE( 480)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,getFirstIndex,return )

int FlxTypedGroup_obj::getLastIndex( ::Dynamic func){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_489_getLastIndex)
HXLINE( 490)		int result = -1;
HXLINE( 491)		int i = this->members->get_length();
HXLINE( 492)		while(true){
HXLINE( 492)			i = (i - 1);
HXDLIN( 492)			if (!(((i + 1) > 0))) {
HXLINE( 492)				goto _hx_goto_22;
            			}
HXLINE( 494)			 ::Dynamic basic = this->members->__get(i);
HXLINE( 495)			bool _hx_tmp;
HXDLIN( 495)			if (::hx::IsNotNull( basic )) {
HXLINE( 495)				_hx_tmp = ( (bool)(func(basic)) );
            			}
            			else {
HXLINE( 495)				_hx_tmp = false;
            			}
HXDLIN( 495)			if (_hx_tmp) {
HXLINE( 497)				result = i;
HXLINE( 498)				goto _hx_goto_22;
            			}
            		}
            		_hx_goto_22:;
HXLINE( 501)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,getLastIndex,return )

bool FlxTypedGroup_obj::any( ::Dynamic func){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_510_any)
HXLINE( 511)		{
HXLINE( 511)			int _g = 0;
HXDLIN( 511)			::cpp::VirtualArray _g1 = this->members;
HXDLIN( 511)			while((_g < _g1->get_length())){
HXLINE( 511)				 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 511)				_g = (_g + 1);
HXLINE( 513)				bool _hx_tmp;
HXDLIN( 513)				if (::hx::IsNotNull( basic )) {
HXLINE( 513)					_hx_tmp = ( (bool)(func(basic)) );
            				}
            				else {
HXLINE( 513)					_hx_tmp = false;
            				}
HXDLIN( 513)				if (_hx_tmp) {
HXLINE( 514)					return true;
            				}
            			}
            		}
HXLINE( 516)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,any,return )

bool FlxTypedGroup_obj::every( ::Dynamic func){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_525_every)
HXLINE( 526)		{
HXLINE( 526)			int _g = 0;
HXDLIN( 526)			::cpp::VirtualArray _g1 = this->members;
HXDLIN( 526)			while((_g < _g1->get_length())){
HXLINE( 526)				 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 526)				_g = (_g + 1);
HXLINE( 528)				bool _hx_tmp;
HXDLIN( 528)				if (::hx::IsNotNull( basic )) {
HXLINE( 528)					_hx_tmp = !(( (bool)(func(basic)) ));
            				}
            				else {
HXLINE( 528)					_hx_tmp = false;
            				}
HXDLIN( 528)				if (_hx_tmp) {
HXLINE( 529)					return false;
            				}
            			}
            		}
HXLINE( 531)		return true;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,every,return )

 ::Dynamic FlxTypedGroup_obj::getFirstAvailable(::hx::Class objectClass,::hx::Null< bool >  __o_force){
            		bool force = __o_force.Default(false);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_544_getFirstAvailable)
HXLINE( 545)		{
HXLINE( 545)			int _g = 0;
HXDLIN( 545)			::cpp::VirtualArray _g1 = this->members;
HXDLIN( 545)			while((_g < _g1->get_length())){
HXLINE( 545)				 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 545)				_g = (_g + 1);
HXLINE( 547)				bool _hx_tmp;
HXDLIN( 547)				bool _hx_tmp1;
HXDLIN( 547)				if (::hx::IsNotNull( basic )) {
HXLINE( 547)					_hx_tmp1 = !(( ( ::flixel::FlxBasic)(basic) )->exists);
            				}
            				else {
HXLINE( 547)					_hx_tmp1 = false;
            				}
HXDLIN( 547)				if (_hx_tmp1) {
HXLINE( 547)					if (::hx::IsNotNull( objectClass )) {
HXLINE( 547)						_hx_tmp = ::Std_obj::isOfType(basic,objectClass);
            					}
            					else {
HXLINE( 547)						_hx_tmp = true;
            					}
            				}
            				else {
HXLINE( 547)					_hx_tmp = false;
            				}
HXDLIN( 547)				if (_hx_tmp) {
HXLINE( 549)					bool _hx_tmp;
HXDLIN( 549)					if (force) {
HXLINE( 549)						::String _hx_tmp1 = ::Type_obj::getClassName(::Type_obj::getClass(basic));
HXDLIN( 549)						_hx_tmp = (_hx_tmp1 != ::Type_obj::getClassName(objectClass));
            					}
            					else {
HXLINE( 549)						_hx_tmp = false;
            					}
HXDLIN( 549)					if (_hx_tmp) {
HXLINE( 551)						continue;
            					}
HXLINE( 553)					return basic;
            				}
            			}
            		}
HXLINE( 557)		return null();
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,getFirstAvailable,return )

int FlxTypedGroup_obj::getFirstNull(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_568_getFirstNull)
HXDLIN( 568)		return this->members->indexOf(null(),null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstNull,return )

 ::Dynamic FlxTypedGroup_obj::getFirstExisting(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_579_getFirstExisting)
HXDLIN( 579)		 ::Dynamic result = null();
HXDLIN( 579)		{
HXDLIN( 579)			int _g = 0;
HXDLIN( 579)			::cpp::VirtualArray _g1 = this->members;
HXDLIN( 579)			while((_g < _g1->get_length())){
HXDLIN( 579)				 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 579)				_g = (_g + 1);
HXDLIN( 579)				bool _hx_tmp;
HXDLIN( 579)				if (::hx::IsNotNull( basic )) {
HXDLIN( 579)					_hx_tmp = ( ( ::flixel::FlxBasic)(basic) )->exists;
            				}
            				else {
HXDLIN( 579)					_hx_tmp = false;
            				}
HXDLIN( 579)				if (_hx_tmp) {
HXDLIN( 579)					result = basic;
HXDLIN( 579)					goto _hx_goto_31;
            				}
            			}
            			_hx_goto_31:;
            		}
HXDLIN( 579)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstExisting,return )

 ::Dynamic FlxTypedGroup_obj::getFirstAlive(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_590_getFirstAlive)
HXDLIN( 590)		 ::Dynamic result = null();
HXDLIN( 590)		{
HXDLIN( 590)			int _g = 0;
HXDLIN( 590)			::cpp::VirtualArray _g1 = this->members;
HXDLIN( 590)			while((_g < _g1->get_length())){
HXDLIN( 590)				 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 590)				_g = (_g + 1);
HXDLIN( 590)				bool _hx_tmp;
HXDLIN( 590)				if (::hx::IsNotNull( basic )) {
HXDLIN( 590)					if (( ( ::flixel::FlxBasic)(basic) )->exists) {
HXDLIN( 590)						_hx_tmp = ( ( ::flixel::FlxBasic)(basic) )->alive;
            					}
            					else {
HXDLIN( 590)						_hx_tmp = false;
            					}
            				}
            				else {
HXDLIN( 590)					_hx_tmp = false;
            				}
HXDLIN( 590)				if (_hx_tmp) {
HXDLIN( 590)					result = basic;
HXDLIN( 590)					goto _hx_goto_33;
            				}
            			}
            			_hx_goto_33:;
            		}
HXDLIN( 590)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstAlive,return )

 ::Dynamic FlxTypedGroup_obj::getFirstDead(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_601_getFirstDead)
HXDLIN( 601)		 ::Dynamic result = null();
HXDLIN( 601)		{
HXDLIN( 601)			int _g = 0;
HXDLIN( 601)			::cpp::VirtualArray _g1 = this->members;
HXDLIN( 601)			while((_g < _g1->get_length())){
HXDLIN( 601)				 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 601)				_g = (_g + 1);
HXDLIN( 601)				bool _hx_tmp;
HXDLIN( 601)				if (::hx::IsNotNull( basic )) {
HXDLIN( 601)					_hx_tmp = !(( ( ::flixel::FlxBasic)(basic) )->alive);
            				}
            				else {
HXDLIN( 601)					_hx_tmp = false;
            				}
HXDLIN( 601)				if (_hx_tmp) {
HXDLIN( 601)					result = basic;
HXDLIN( 601)					goto _hx_goto_35;
            				}
            			}
            			_hx_goto_35:;
            		}
HXDLIN( 601)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,getFirstDead,return )

int FlxTypedGroup_obj::countLiving(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_610_countLiving)
HXLINE( 611)		int count = -1;
HXLINE( 613)		{
HXLINE( 613)			int _g = 0;
HXDLIN( 613)			::cpp::VirtualArray _g1 = this->members;
HXDLIN( 613)			while((_g < _g1->get_length())){
HXLINE( 613)				 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 613)				_g = (_g + 1);
HXLINE( 615)				if (::hx::IsNotNull( basic )) {
HXLINE( 617)					if ((count < 0)) {
HXLINE( 618)						count = 0;
            					}
HXLINE( 619)					bool _hx_tmp;
HXDLIN( 619)					if (( ( ::flixel::FlxBasic)(basic) )->exists) {
HXLINE( 619)						_hx_tmp = ( ( ::flixel::FlxBasic)(basic) )->alive;
            					}
            					else {
HXLINE( 619)						_hx_tmp = false;
            					}
HXDLIN( 619)					if (_hx_tmp) {
HXLINE( 620)						count = (count + 1);
            					}
            				}
            			}
            		}
HXLINE( 624)		return count;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,countLiving,return )

int FlxTypedGroup_obj::countDead(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_633_countDead)
HXLINE( 634)		int count = -1;
HXLINE( 636)		{
HXLINE( 636)			int _g = 0;
HXDLIN( 636)			::cpp::VirtualArray _g1 = this->members;
HXDLIN( 636)			while((_g < _g1->get_length())){
HXLINE( 636)				 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 636)				_g = (_g + 1);
HXLINE( 638)				if (::hx::IsNotNull( basic )) {
HXLINE( 640)					if ((count < 0)) {
HXLINE( 641)						count = 0;
            					}
HXLINE( 642)					if (!(( ( ::flixel::FlxBasic)(basic) )->alive)) {
HXLINE( 643)						count = (count + 1);
            					}
            				}
            			}
            		}
HXLINE( 647)		return count;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,countDead,return )

 ::Dynamic FlxTypedGroup_obj::getRandom(::hx::Null< int >  __o_startIndex,::hx::Null< int >  __o_length){
            		int startIndex = __o_startIndex.Default(0);
            		int length = __o_length.Default(0);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_659_getRandom)
HXLINE( 660)		if ((startIndex < 0)) {
HXLINE( 661)			startIndex = 0;
            		}
HXLINE( 662)		if ((length <= 0)) {
HXLINE( 663)			length = this->length;
            		}
HXLINE( 665)		return ::flixel::FlxG_obj::random->getObject_flixel_group_FlxTypedGroup_T(this->members,null(),startIndex,length);
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,getRandom,return )

void FlxTypedGroup_obj::clear(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_673_clear)
HXLINE( 674)		this->length = 0;
HXLINE( 676)		if (::hx::IsNotNull( this->_memberRemoved )) {
HXLINE( 678)			int _g = 0;
HXDLIN( 678)			::cpp::VirtualArray _g1 = this->members;
HXDLIN( 678)			while((_g < _g1->get_length())){
HXLINE( 678)				 ::Dynamic member = _g1->__get(_g);
HXDLIN( 678)				_g = (_g + 1);
HXLINE( 680)				if (::hx::IsNotNull( member )) {
HXLINE( 681)					this->_memberRemoved->dispatch(member);
            				}
            			}
            		}
HXLINE( 685)		::flixel::util::FlxArrayUtil_obj::clearArray(this->members,null());
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,clear,(void))

void FlxTypedGroup_obj::killMembers(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_694_killMembers)
HXDLIN( 694)		int _g = 0;
HXDLIN( 694)		::cpp::VirtualArray _g1 = this->members;
HXDLIN( 694)		while((_g < _g1->get_length())){
HXDLIN( 694)			 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 694)			_g = (_g + 1);
HXLINE( 696)			bool _hx_tmp;
HXDLIN( 696)			if (::hx::IsNotNull( basic )) {
HXLINE( 696)				_hx_tmp = ( ( ::flixel::FlxBasic)(basic) )->exists;
            			}
            			else {
HXLINE( 696)				_hx_tmp = false;
            			}
HXDLIN( 696)			if (_hx_tmp) {
HXLINE( 697)				( ( ::flixel::FlxBasic)(basic) )->kill();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,killMembers,(void))

void FlxTypedGroup_obj::kill(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_706_kill)
HXLINE( 707)		this->killMembers();
HXLINE( 709)		this->super::kill();
            	}


void FlxTypedGroup_obj::reviveMembers(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_718_reviveMembers)
HXDLIN( 718)		int _g = 0;
HXDLIN( 718)		::cpp::VirtualArray _g1 = this->members;
HXDLIN( 718)		while((_g < _g1->get_length())){
HXDLIN( 718)			 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 718)			_g = (_g + 1);
HXLINE( 720)			bool _hx_tmp;
HXDLIN( 720)			if (::hx::IsNotNull( basic )) {
HXLINE( 720)				_hx_tmp = !(( ( ::flixel::FlxBasic)(basic) )->exists);
            			}
            			else {
HXLINE( 720)				_hx_tmp = false;
            			}
HXDLIN( 720)			if (_hx_tmp) {
HXLINE( 721)				( ( ::flixel::FlxBasic)(basic) )->revive();
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,reviveMembers,(void))

void FlxTypedGroup_obj::revive(){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_729_revive)
HXLINE( 730)		this->reviveMembers();
HXLINE( 732)		this->super::revive();
            	}


 ::flixel::group::FlxTypedGroupIterator FlxTypedGroup_obj::iterator( ::Dynamic filter){
            	HX_GC_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_740_iterator)
HXDLIN( 740)		return  ::flixel::group::FlxTypedGroupIterator_obj::__alloc( HX_CTX ,this->members,filter);
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,iterator,return )

 ::haxe::iterators::ArrayKeyValueIterator FlxTypedGroup_obj::keyValueIterator(){
            	HX_GC_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_748_keyValueIterator)
HXDLIN( 748)		return  ::haxe::iterators::ArrayKeyValueIterator_obj::__alloc( HX_CTX ,this->members);
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,keyValueIterator,return )

void FlxTypedGroup_obj::forEach( ::Dynamic func,::hx::Null< bool >  __o_recurse){
            		bool recurse = __o_recurse.Default(false);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_759_forEach)
HXDLIN( 759)		int _g = 0;
HXDLIN( 759)		::cpp::VirtualArray _g1 = this->members;
HXDLIN( 759)		while((_g < _g1->get_length())){
HXDLIN( 759)			 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 759)			_g = (_g + 1);
HXLINE( 761)			if (::hx::IsNotNull( basic )) {
HXLINE( 763)				if (recurse) {
HXLINE( 765)					 ::flixel::group::FlxTypedGroup group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(( ( ::flixel::FlxBasic)(basic) ));
HXLINE( 766)					if (::hx::IsNotNull( group )) {
HXLINE( 767)						group->forEach(func,recurse);
            					}
            				}
HXLINE( 770)				func(basic);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,forEach,(void))

void FlxTypedGroup_obj::forEachAlive( ::Dynamic func,::hx::Null< bool >  __o_recurse){
            		bool recurse = __o_recurse.Default(false);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_783_forEachAlive)
HXDLIN( 783)		int _g = 0;
HXDLIN( 783)		::cpp::VirtualArray _g1 = this->members;
HXDLIN( 783)		while((_g < _g1->get_length())){
HXDLIN( 783)			 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 783)			_g = (_g + 1);
HXLINE( 785)			bool _hx_tmp;
HXDLIN( 785)			bool _hx_tmp1;
HXDLIN( 785)			if (::hx::IsNotNull( basic )) {
HXLINE( 785)				_hx_tmp1 = ( ( ::flixel::FlxBasic)(basic) )->exists;
            			}
            			else {
HXLINE( 785)				_hx_tmp1 = false;
            			}
HXDLIN( 785)			if (_hx_tmp1) {
HXLINE( 785)				_hx_tmp = ( ( ::flixel::FlxBasic)(basic) )->alive;
            			}
            			else {
HXLINE( 785)				_hx_tmp = false;
            			}
HXDLIN( 785)			if (_hx_tmp) {
HXLINE( 787)				if (recurse) {
HXLINE( 789)					 ::flixel::group::FlxTypedGroup group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(( ( ::flixel::FlxBasic)(basic) ));
HXLINE( 790)					if (::hx::IsNotNull( group )) {
HXLINE( 791)						group->forEachAlive(func,recurse);
            					}
            				}
HXLINE( 794)				func(basic);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,forEachAlive,(void))

void FlxTypedGroup_obj::forEachDead( ::Dynamic func,::hx::Null< bool >  __o_recurse){
            		bool recurse = __o_recurse.Default(false);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_807_forEachDead)
HXDLIN( 807)		int _g = 0;
HXDLIN( 807)		::cpp::VirtualArray _g1 = this->members;
HXDLIN( 807)		while((_g < _g1->get_length())){
HXDLIN( 807)			 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 807)			_g = (_g + 1);
HXLINE( 809)			bool _hx_tmp;
HXDLIN( 809)			if (::hx::IsNotNull( basic )) {
HXLINE( 809)				_hx_tmp = !(( ( ::flixel::FlxBasic)(basic) )->alive);
            			}
            			else {
HXLINE( 809)				_hx_tmp = false;
            			}
HXDLIN( 809)			if (_hx_tmp) {
HXLINE( 811)				if (recurse) {
HXLINE( 813)					 ::flixel::group::FlxTypedGroup group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(( ( ::flixel::FlxBasic)(basic) ));
HXLINE( 814)					if (::hx::IsNotNull( group )) {
HXLINE( 815)						group->forEachDead(func,recurse);
            					}
            				}
HXLINE( 818)				func(basic);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,forEachDead,(void))

void FlxTypedGroup_obj::forEachExists( ::Dynamic func,::hx::Null< bool >  __o_recurse){
            		bool recurse = __o_recurse.Default(false);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_831_forEachExists)
HXDLIN( 831)		int _g = 0;
HXDLIN( 831)		::cpp::VirtualArray _g1 = this->members;
HXDLIN( 831)		while((_g < _g1->get_length())){
HXDLIN( 831)			 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 831)			_g = (_g + 1);
HXLINE( 833)			bool _hx_tmp;
HXDLIN( 833)			if (::hx::IsNotNull( basic )) {
HXLINE( 833)				_hx_tmp = ( ( ::flixel::FlxBasic)(basic) )->exists;
            			}
            			else {
HXLINE( 833)				_hx_tmp = false;
            			}
HXDLIN( 833)			if (_hx_tmp) {
HXLINE( 835)				if (recurse) {
HXLINE( 837)					 ::flixel::group::FlxTypedGroup group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(( ( ::flixel::FlxBasic)(basic) ));
HXLINE( 838)					if (::hx::IsNotNull( group )) {
HXLINE( 839)						group->forEachExists(func,recurse);
            					}
            				}
HXLINE( 842)				func(basic);
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC2(FlxTypedGroup_obj,forEachExists,(void))

void FlxTypedGroup_obj::forEachOfType(::hx::Class objectClass, ::Dynamic func,::hx::Null< bool >  __o_recurse){
            		bool recurse = __o_recurse.Default(false);
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_856_forEachOfType)
HXDLIN( 856)		int _g = 0;
HXDLIN( 856)		::cpp::VirtualArray _g1 = this->members;
HXDLIN( 856)		while((_g < _g1->get_length())){
HXDLIN( 856)			 ::Dynamic basic = _g1->__get(_g);
HXDLIN( 856)			_g = (_g + 1);
HXLINE( 858)			if (::hx::IsNotNull( basic )) {
HXLINE( 860)				if (recurse) {
HXLINE( 862)					 ::flixel::group::FlxTypedGroup group = ::flixel::group::FlxTypedGroup_obj::resolveGroup(( ( ::flixel::FlxBasic)(basic) ));
HXLINE( 863)					if (::hx::IsNotNull( group )) {
HXLINE( 864)						group->forEachOfType(objectClass,func,recurse);
            					}
            				}
HXLINE( 867)				if (::Std_obj::isOfType(basic,objectClass)) {
HXLINE( 868)					func(basic);
            				}
            			}
            		}
            	}


HX_DEFINE_DYNAMIC_FUNC3(FlxTypedGroup_obj,forEachOfType,(void))

int FlxTypedGroup_obj::set_maxSize(int size){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_875_set_maxSize)
HXLINE( 876)		this->maxSize = ::Std_obj::_hx_int(::Math_obj::abs(( (Float)(size) )));
HXLINE( 878)		if ((this->_marker >= this->maxSize)) {
HXLINE( 879)			this->_marker = 0;
            		}
HXLINE( 881)		bool _hx_tmp;
HXDLIN( 881)		bool _hx_tmp1;
HXDLIN( 881)		if ((this->maxSize != 0)) {
HXLINE( 881)			_hx_tmp1 = ::hx::IsNull( this->members );
            		}
            		else {
HXLINE( 881)			_hx_tmp1 = true;
            		}
HXDLIN( 881)		if (!(_hx_tmp1)) {
HXLINE( 881)			_hx_tmp = (this->maxSize >= this->length);
            		}
            		else {
HXLINE( 881)			_hx_tmp = true;
            		}
HXDLIN( 881)		if (_hx_tmp) {
HXLINE( 882)			return this->maxSize;
            		}
HXLINE( 885)		while((this->length > this->maxSize)){
HXLINE( 887)			 ::Dynamic basic = this->members->splice((this->maxSize - 1),1)->__get(0);
HXLINE( 889)			if (::hx::IsNotNull( basic )) {
HXLINE( 891)				if (::hx::IsNotNull( this->_memberRemoved )) {
HXLINE( 892)					this->_memberRemoved->dispatch(basic);
            				}
HXLINE( 894)				( ( ::flixel::FlxBasic)(basic) )->destroy();
            			}
HXLINE( 896)			this->length--;
            		}
HXLINE( 899)		return this->maxSize;
            	}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,set_maxSize,return )

 ::flixel::util::_FlxSignal::FlxSignal1 FlxTypedGroup_obj::get_memberAdded(){
            	HX_GC_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_904_get_memberAdded)
HXLINE( 905)		if (::hx::IsNull( this->_memberAdded )) {
HXLINE( 906)			this->_memberAdded =  ::flixel::util::_FlxSignal::FlxSignal1_obj::__alloc( HX_CTX );
            		}
HXLINE( 908)		return this->_memberAdded;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,get_memberAdded,return )

 ::flixel::util::_FlxSignal::FlxSignal1 FlxTypedGroup_obj::get_memberRemoved(){
            	HX_GC_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_913_get_memberRemoved)
HXLINE( 914)		if (::hx::IsNull( this->_memberRemoved )) {
HXLINE( 915)			this->_memberRemoved =  ::flixel::util::_FlxSignal::FlxSignal1_obj::__alloc( HX_CTX );
            		}
HXLINE( 917)		return this->_memberRemoved;
            	}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedGroup_obj,get_memberRemoved,return )

 ::flixel::group::FlxTypedGroup FlxTypedGroup_obj::resolveGroup( ::flixel::FlxBasic basic){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_26_resolveGroup)
HXLINE(  27)		if (::hx::IsNotNull( basic )) {
HXLINE(  29)			if ((basic->flixelType == 2)) {
HXLINE(  31)				return ( ( ::flixel::group::FlxTypedGroup)(basic) );
            			}
            			else {
HXLINE(  33)				if ((basic->flixelType == 4)) {
HXLINE(  35)					return ( ( ::flixel::group::FlxTypedGroup)(( ( ::flixel::group::FlxTypedSpriteGroup)(basic) )->__Field(HX_("group",3f,b3,f4,99),::hx::paccDynamic)) );
            				}
            			}
            		}
HXLINE(  38)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,resolveGroup,return )

 ::flixel::group::FlxTypedGroup FlxTypedGroup_obj::resolveSelectionGroup( ::flixel::FlxBasic basic){
            	HX_STACKFRAME(&_hx_pos_bfa1de30d9ec9fbd_45_resolveSelectionGroup)
HXDLIN(  45)		return ::flixel::group::FlxTypedGroup_obj::resolveGroup(basic);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxTypedGroup_obj,resolveSelectionGroup,return )


::hx::ObjectPtr< FlxTypedGroup_obj > FlxTypedGroup_obj::__new(::hx::Null< int >  __o_MaxSize) {
	::hx::ObjectPtr< FlxTypedGroup_obj > __this = new FlxTypedGroup_obj();
	__this->__construct(__o_MaxSize);
	return __this;
}

::hx::ObjectPtr< FlxTypedGroup_obj > FlxTypedGroup_obj::__alloc(::hx::Ctx *_hx_ctx,::hx::Null< int >  __o_MaxSize) {
	FlxTypedGroup_obj *__this = (FlxTypedGroup_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(FlxTypedGroup_obj), true, "flixel.group.FlxTypedGroup"));
	*(void **)__this = FlxTypedGroup_obj::_hx_vtable;
	__this->__construct(__o_MaxSize);
	return __this;
}

FlxTypedGroup_obj::FlxTypedGroup_obj()
{
}

void FlxTypedGroup_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTypedGroup);
	HX_MARK_MEMBER_NAME(members,"members");
	HX_MARK_MEMBER_NAME(maxSize,"maxSize");
	HX_MARK_MEMBER_NAME(length,"length");
	HX_MARK_MEMBER_NAME(_memberAdded,"_memberAdded");
	HX_MARK_MEMBER_NAME(_memberRemoved,"_memberRemoved");
	HX_MARK_MEMBER_NAME(_marker,"_marker");
	 ::flixel::FlxBasic_obj::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTypedGroup_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(members,"members");
	HX_VISIT_MEMBER_NAME(maxSize,"maxSize");
	HX_VISIT_MEMBER_NAME(length,"length");
	HX_VISIT_MEMBER_NAME(_memberAdded,"_memberAdded");
	HX_VISIT_MEMBER_NAME(_memberRemoved,"_memberRemoved");
	HX_VISIT_MEMBER_NAME(_marker,"_marker");
	 ::flixel::FlxBasic_obj::__Visit(HX_VISIT_ARG);
}

::hx::Val FlxTypedGroup_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"add") ) { return ::hx::Val( add_dyn() ); }
		if (HX_FIELD_EQ(inName,"any") ) { return ::hx::Val( any_dyn() ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return ::hx::Val( draw_dyn() ); }
		if (HX_FIELD_EQ(inName,"sort") ) { return ::hx::Val( sort_dyn() ); }
		if (HX_FIELD_EQ(inName,"kill") ) { return ::hx::Val( kill_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"every") ) { return ::hx::Val( every_dyn() ); }
		if (HX_FIELD_EQ(inName,"clear") ) { return ::hx::Val( clear_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { return ::hx::Val( length ); }
		if (HX_FIELD_EQ(inName,"update") ) { return ::hx::Val( update_dyn() ); }
		if (HX_FIELD_EQ(inName,"insert") ) { return ::hx::Val( insert_dyn() ); }
		if (HX_FIELD_EQ(inName,"remove") ) { return ::hx::Val( remove_dyn() ); }
		if (HX_FIELD_EQ(inName,"revive") ) { return ::hx::Val( revive_dyn() ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"members") ) { return ::hx::Val( members ); }
		if (HX_FIELD_EQ(inName,"maxSize") ) { return ::hx::Val( maxSize ); }
		if (HX_FIELD_EQ(inName,"_marker") ) { return ::hx::Val( _marker ); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return ::hx::Val( destroy_dyn() ); }
		if (HX_FIELD_EQ(inName,"recycle") ) { return ::hx::Val( recycle_dyn() ); }
		if (HX_FIELD_EQ(inName,"replace") ) { return ::hx::Val( replace_dyn() ); }
		if (HX_FIELD_EQ(inName,"getLast") ) { return ::hx::Val( getLast_dyn() ); }
		if (HX_FIELD_EQ(inName,"forEach") ) { return ::hx::Val( forEach_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getFirst") ) { return ::hx::Val( getFirst_dyn() ); }
		if (HX_FIELD_EQ(inName,"iterator") ) { return ::hx::Val( iterator_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"countDead") ) { return ::hx::Val( countDead_dyn() ); }
		if (HX_FIELD_EQ(inName,"getRandom") ) { return ::hx::Val( getRandom_dyn() ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"memberAdded") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_memberAdded() ); }
		if (HX_FIELD_EQ(inName,"countLiving") ) { return ::hx::Val( countLiving_dyn() ); }
		if (HX_FIELD_EQ(inName,"killMembers") ) { return ::hx::Val( killMembers_dyn() ); }
		if (HX_FIELD_EQ(inName,"forEachDead") ) { return ::hx::Val( forEachDead_dyn() ); }
		if (HX_FIELD_EQ(inName,"set_maxSize") ) { return ::hx::Val( set_maxSize_dyn() ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_memberAdded") ) { return ::hx::Val( _memberAdded ); }
		if (HX_FIELD_EQ(inName,"getLastIndex") ) { return ::hx::Val( getLastIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFirstNull") ) { return ::hx::Val( getFirstNull_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFirstDead") ) { return ::hx::Val( getFirstDead_dyn() ); }
		if (HX_FIELD_EQ(inName,"forEachAlive") ) { return ::hx::Val( forEachAlive_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"memberRemoved") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( get_memberRemoved() ); }
		if (HX_FIELD_EQ(inName,"getFirstIndex") ) { return ::hx::Val( getFirstIndex_dyn() ); }
		if (HX_FIELD_EQ(inName,"getFirstAlive") ) { return ::hx::Val( getFirstAlive_dyn() ); }
		if (HX_FIELD_EQ(inName,"reviveMembers") ) { return ::hx::Val( reviveMembers_dyn() ); }
		if (HX_FIELD_EQ(inName,"forEachExists") ) { return ::hx::Val( forEachExists_dyn() ); }
		if (HX_FIELD_EQ(inName,"forEachOfType") ) { return ::hx::Val( forEachOfType_dyn() ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_memberRemoved") ) { return ::hx::Val( _memberRemoved ); }
		if (HX_FIELD_EQ(inName,"getFirstHelper") ) { return ::hx::Val( getFirstHelper_dyn() ); }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"get_memberAdded") ) { return ::hx::Val( get_memberAdded_dyn() ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"getFirstExisting") ) { return ::hx::Val( getFirstExisting_dyn() ); }
		if (HX_FIELD_EQ(inName,"keyValueIterator") ) { return ::hx::Val( keyValueIterator_dyn() ); }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"getFirstAvailable") ) { return ::hx::Val( getFirstAvailable_dyn() ); }
		if (HX_FIELD_EQ(inName,"get_memberRemoved") ) { return ::hx::Val( get_memberRemoved_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

bool FlxTypedGroup_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resolveGroup") ) { outValue = resolveGroup_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"resolveSelectionGroup") ) { outValue = resolveSelectionGroup_dyn(); return true; }
	}
	return false;
}

::hx::Val FlxTypedGroup_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"length") ) { length=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"members") ) { members=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		if (HX_FIELD_EQ(inName,"maxSize") ) { if (inCallProp == ::hx::paccAlways) return ::hx::Val( set_maxSize(inValue.Cast< int >()) );maxSize=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_marker") ) { _marker=inValue.Cast< int >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_memberAdded") ) { _memberAdded=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal1 >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_memberRemoved") ) { _memberRemoved=inValue.Cast<  ::flixel::util::_FlxSignal::FlxSignal1 >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTypedGroup_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("members",d9,2c,70,1a));
	outFields->push(HX_("maxSize",85,f9,83,cc));
	outFields->push(HX_("length",e6,94,07,9f));
	outFields->push(HX_("memberAdded",06,9c,46,1e));
	outFields->push(HX_("memberRemoved",66,c4,b7,90));
	outFields->push(HX_("_memberAdded",07,4a,50,84));
	outFields->push(HX_("_memberRemoved",a7,b4,09,cf));
	outFields->push(HX_("_marker",59,87,e7,28));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo FlxTypedGroup_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(FlxTypedGroup_obj,members),HX_("members",d9,2c,70,1a)},
	{::hx::fsInt,(int)offsetof(FlxTypedGroup_obj,maxSize),HX_("maxSize",85,f9,83,cc)},
	{::hx::fsInt,(int)offsetof(FlxTypedGroup_obj,length),HX_("length",e6,94,07,9f)},
	{::hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal1 */ ,(int)offsetof(FlxTypedGroup_obj,_memberAdded),HX_("_memberAdded",07,4a,50,84)},
	{::hx::fsObject /*  ::flixel::util::_FlxSignal::FlxSignal1 */ ,(int)offsetof(FlxTypedGroup_obj,_memberRemoved),HX_("_memberRemoved",a7,b4,09,cf)},
	{::hx::fsInt,(int)offsetof(FlxTypedGroup_obj,_marker),HX_("_marker",59,87,e7,28)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *FlxTypedGroup_obj_sStaticStorageInfo = 0;
#endif

static ::String FlxTypedGroup_obj_sMemberFields[] = {
	HX_("members",d9,2c,70,1a),
	HX_("maxSize",85,f9,83,cc),
	HX_("length",e6,94,07,9f),
	HX_("_memberAdded",07,4a,50,84),
	HX_("_memberRemoved",a7,b4,09,cf),
	HX_("_marker",59,87,e7,28),
	HX_("destroy",fa,2c,86,24),
	HX_("update",09,86,05,87),
	HX_("draw",04,2c,70,42),
	HX_("add",21,f2,49,00),
	HX_("insert",39,43,dd,9d),
	HX_("recycle",13,10,8c,37),
	HX_("remove",44,9c,88,04),
	HX_("replace",34,48,28,ab),
	HX_("sort",5e,27,58,4c),
	HX_("getFirst",ba,87,74,60),
	HX_("getFirstHelper",c8,00,8f,70),
	HX_("getLast",0c,ba,2f,1a),
	HX_("getFirstIndex",f8,40,65,58),
	HX_("getLastIndex",66,65,18,1a),
	HX_("any",ec,fa,49,00),
	HX_("every",9b,cb,c4,75),
	HX_("getFirstAvailable",af,ea,b3,05),
	HX_("getFirstNull",61,b7,33,0f),
	HX_("getFirstExisting",65,a4,6c,ee),
	HX_("getFirstAlive",b3,09,e2,bb),
	HX_("getFirstDead",7e,67,8b,08),
	HX_("countLiving",58,d9,8a,30),
	HX_("countDead",13,d3,86,54),
	HX_("getRandom",39,ab,e5,33),
	HX_("clear",8d,71,5b,48),
	HX_("killMembers",db,c4,63,c2),
	HX_("kill",9e,df,09,47),
	HX_("reviveMembers",04,7f,3d,f9),
	HX_("revive",55,fa,76,0a),
	HX_("iterator",ee,49,9a,93),
	HX_("keyValueIterator",60,cd,ee,4a),
	HX_("forEach",aa,29,be,c4),
	HX_("forEachAlive",c3,61,b7,99),
	HX_("forEachDead",6e,c1,e4,78),
	HX_("forEachExists",26,57,f8,68),
	HX_("forEachOfType",bb,90,76,fd),
	HX_("set_maxSize",a8,60,eb,5c),
	HX_("get_memberAdded",9d,53,28,df),
	HX_("get_memberRemoved",bd,cf,27,97),
	::String(null()) };

::hx::Class FlxTypedGroup_obj::__mClass;

static ::String FlxTypedGroup_obj_sStaticFields[] = {
	HX_("resolveGroup",b3,f8,79,d2),
	HX_("resolveSelectionGroup",5f,03,4c,68),
	::String(null())
};

void FlxTypedGroup_obj::__register()
{
	FlxTypedGroup_obj _hx_dummy;
	FlxTypedGroup_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("flixel.group.FlxTypedGroup",e6,b8,51,d3);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &FlxTypedGroup_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(FlxTypedGroup_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FlxTypedGroup_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FlxTypedGroup_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FlxTypedGroup_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FlxTypedGroup_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace flixel
} // end namespace group