// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_haxe_iterators_ArrayKeyValueIterator
#include <haxe/iterators/ArrayKeyValueIterator.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_5868e9ee7f4b28b2_26_new,"haxe.iterators.ArrayKeyValueIterator","new",0x6bd8a13a,"haxe.iterators.ArrayKeyValueIterator.new","C:\\HaxeToolkit\\haxe\\std/haxe/iterators/ArrayKeyValueIterator.hx",26,0x982cc1ff)
HX_LOCAL_STACK_FRAME(_hx_pos_5868e9ee7f4b28b2_35_hasNext,"haxe.iterators.ArrayKeyValueIterator","hasNext",0x73cdeb47,"haxe.iterators.ArrayKeyValueIterator.hasNext","C:\\HaxeToolkit\\haxe\\std/haxe/iterators/ArrayKeyValueIterator.hx",35,0x982cc1ff)
HX_LOCAL_STACK_FRAME(_hx_pos_5868e9ee7f4b28b2_39_next,"haxe.iterators.ArrayKeyValueIterator","next",0xf1b472d9,"haxe.iterators.ArrayKeyValueIterator.next","C:\\HaxeToolkit\\haxe\\std/haxe/iterators/ArrayKeyValueIterator.hx",39,0x982cc1ff)
namespace haxe{
namespace iterators{

void ArrayKeyValueIterator_obj::__construct(::cpp::VirtualArray array){
            	HX_STACKFRAME(&_hx_pos_5868e9ee7f4b28b2_26_new)
HXLINE(  27)		this->current = 0;
HXLINE(  31)		this->array = array;
            	}

Dynamic ArrayKeyValueIterator_obj::__CreateEmpty() { return new ArrayKeyValueIterator_obj; }

void *ArrayKeyValueIterator_obj::_hx_vtable = 0;

Dynamic ArrayKeyValueIterator_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ArrayKeyValueIterator_obj > _hx_result = new ArrayKeyValueIterator_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ArrayKeyValueIterator_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x28797002;
}

bool ArrayKeyValueIterator_obj::hasNext(){
            	HX_STACKFRAME(&_hx_pos_5868e9ee7f4b28b2_35_hasNext)
HXDLIN(  35)		return (this->current < this->array->get_length());
            	}


HX_DEFINE_DYNAMIC_FUNC0(ArrayKeyValueIterator_obj,hasNext,return )

 ::Dynamic ArrayKeyValueIterator_obj::next(){
            	HX_STACKFRAME(&_hx_pos_5868e9ee7f4b28b2_39_next)
HXDLIN(  39)		 ::Dynamic _hx_tmp = this->array->__get(this->current);
HXDLIN(  39)		return  ::Dynamic(::hx::Anon_obj::Create(2)
            			->setFixed(0,HX_("key",9f,89,51,00),this->current++)
            			->setFixed(1,HX_("value",71,7f,b8,31),_hx_tmp));
            	}


HX_DEFINE_DYNAMIC_FUNC0(ArrayKeyValueIterator_obj,next,return )


ArrayKeyValueIterator_obj::ArrayKeyValueIterator_obj()
{
}

void ArrayKeyValueIterator_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ArrayKeyValueIterator);
	HX_MARK_MEMBER_NAME(current,"current");
	HX_MARK_MEMBER_NAME(array,"array");
	HX_MARK_END_CLASS();
}

void ArrayKeyValueIterator_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(current,"current");
	HX_VISIT_MEMBER_NAME(array,"array");
}

::hx::Val ArrayKeyValueIterator_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"next") ) { return ::hx::Val( next_dyn() ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"array") ) { return ::hx::Val( array ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { return ::hx::Val( current ); }
		if (HX_FIELD_EQ(inName,"hasNext") ) { return ::hx::Val( hasNext_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val ArrayKeyValueIterator_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"array") ) { array=inValue.Cast< ::cpp::VirtualArray >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"current") ) { current=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void ArrayKeyValueIterator_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("current",39,9c,e3,cb));
	outFields->push(HX_("array",99,6d,8f,25));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo ArrayKeyValueIterator_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(ArrayKeyValueIterator_obj,current),HX_("current",39,9c,e3,cb)},
	{::hx::fsObject /* ::cpp::VirtualArray */ ,(int)offsetof(ArrayKeyValueIterator_obj,array),HX_("array",99,6d,8f,25)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *ArrayKeyValueIterator_obj_sStaticStorageInfo = 0;
#endif

static ::String ArrayKeyValueIterator_obj_sMemberFields[] = {
	HX_("current",39,9c,e3,cb),
	HX_("array",99,6d,8f,25),
	HX_("hasNext",6d,a5,46,18),
	HX_("next",f3,84,02,49),
	::String(null()) };

::hx::Class ArrayKeyValueIterator_obj::__mClass;

void ArrayKeyValueIterator_obj::__register()
{
	ArrayKeyValueIterator_obj _hx_dummy;
	ArrayKeyValueIterator_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("haxe.iterators.ArrayKeyValueIterator",48,3c,f5,ae);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ArrayKeyValueIterator_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ArrayKeyValueIterator_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ArrayKeyValueIterator_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ArrayKeyValueIterator_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace haxe
} // end namespace iterators
