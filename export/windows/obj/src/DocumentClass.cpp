#include <hxcpp.h>

#ifndef INCLUDED_DocumentClass
#include <DocumentClass.h>
#endif
#ifndef INCLUDED_Main
#include <Main.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObject
#include <openfl/display/DisplayObject.h>
#endif
#ifndef INCLUDED_openfl_display_DisplayObjectContainer
#include <openfl/display/DisplayObjectContainer.h>
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
#ifndef INCLUDED_openfl_events_Event
#include <openfl/events/Event.h>
#endif
#ifndef INCLUDED_openfl_events_EventDispatcher
#include <openfl/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_openfl_events_IEventDispatcher
#include <openfl/events/IEventDispatcher.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_9453f8fd92a21d0a_337_new,"DocumentClass","new",0x4aeb0a6f,"DocumentClass.new","ApplicationMain.hx",337,0x0780ded5)

void DocumentClass_obj::__construct( ::openfl::display::DisplayObjectContainer current){
            	HX_GC_STACKFRAME(&_hx_pos_9453f8fd92a21d0a_337_new)
HXLINE( 338)		current->addChild(::hx::ObjectPtr<OBJ_>(this));
HXLINE( 339)		super::__construct();
HXLINE( 340)		this->dispatchEvent( ::openfl::events::Event_obj::__alloc( HX_CTX ,HX_("addedToStage",63,22,55,0c),false,false));
            	}

Dynamic DocumentClass_obj::__CreateEmpty() { return new DocumentClass_obj; }

void *DocumentClass_obj::_hx_vtable = 0;

Dynamic DocumentClass_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< DocumentClass_obj > _hx_result = new DocumentClass_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool DocumentClass_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x1a4abc3d) {
		if (inClassId<=(int)0x07825a7d) {
			if (inClassId<=(int)0x0330636f) {
				return inClassId==(int)0x00000001 || inClassId==(int)0x0330636f;
			} else {
				return inClassId==(int)0x07825a7d;
			}
		} else {
			return inClassId==(int)0x0c89e854 || inClassId==(int)0x1a4abc3d;
		}
	} else {
		if (inClassId<=(int)0x4af7dd8e) {
			return inClassId==(int)0x1f4df417 || inClassId==(int)0x4af7dd8e;
		} else {
			return inClassId==(int)0x6b353933;
		}
	}
}


::hx::ObjectPtr< DocumentClass_obj > DocumentClass_obj::__new( ::openfl::display::DisplayObjectContainer current) {
	::hx::ObjectPtr< DocumentClass_obj > __this = new DocumentClass_obj();
	__this->__construct(current);
	return __this;
}

::hx::ObjectPtr< DocumentClass_obj > DocumentClass_obj::__alloc(::hx::Ctx *_hx_ctx, ::openfl::display::DisplayObjectContainer current) {
	DocumentClass_obj *__this = (DocumentClass_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(DocumentClass_obj), true, "DocumentClass"));
	*(void **)__this = DocumentClass_obj::_hx_vtable;
	__this->__construct(current);
	return __this;
}

DocumentClass_obj::DocumentClass_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *DocumentClass_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *DocumentClass_obj_sStaticStorageInfo = 0;
#endif

::hx::Class DocumentClass_obj::__mClass;

void DocumentClass_obj::__register()
{
	DocumentClass_obj _hx_dummy;
	DocumentClass_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("DocumentClass",fd,a6,03,3e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< DocumentClass_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = DocumentClass_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = DocumentClass_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}
