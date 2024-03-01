// Generated by Haxe 4.3.3
#include <hxcpp.h>

#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_Input
#include <haxe/io/Input.h>
#endif
#ifndef INCLUDED_haxe_io_Output
#include <haxe/io/Output.h>
#endif
#ifndef INCLUDED_sys_io_File
#include <sys/io/File.h>
#endif
#ifndef INCLUDED_sys_io_FileInput
#include <sys/io/FileInput.h>
#endif
#ifndef INCLUDED_sys_io_FileOutput
#include <sys/io/FileOutput.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_57691c97f4384ed7_30_getContent,"sys.io.File","getContent",0xb28b4a0e,"sys.io.File.getContent","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/io/File.hx",30,0xd489c8a1)
HX_LOCAL_STACK_FRAME(_hx_pos_57691c97f4384ed7_33_getBytes,"sys.io.File","getBytes",0xbe457600,"sys.io.File.getBytes","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/io/File.hx",33,0xd489c8a1)
HX_LOCAL_STACK_FRAME(_hx_pos_57691c97f4384ed7_44_saveBytes,"sys.io.File","saveBytes",0x6700fb83,"sys.io.File.saveBytes","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/io/File.hx",44,0xd489c8a1)
HX_LOCAL_STACK_FRAME(_hx_pos_57691c97f4384ed7_51_read,"sys.io.File","read",0x203d07e1,"sys.io.File.read","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/io/File.hx",51,0xd489c8a1)
HX_LOCAL_STACK_FRAME(_hx_pos_57691c97f4384ed7_55_write,"sys.io.File","write",0xfec8a9f4,"sys.io.File.write","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/io/File.hx",55,0xd489c8a1)
HX_LOCAL_STACK_FRAME(_hx_pos_57691c97f4384ed7_69_copy,"sys.io.File","copy",0x165a7840,"sys.io.File.copy","C:\\HaxeToolkit\\haxe\\std/cpp/_std/sys/io/File.hx",69,0xd489c8a1)
namespace sys{
namespace io{

void File_obj::__construct() { }

Dynamic File_obj::__CreateEmpty() { return new File_obj; }

void *File_obj::_hx_vtable = 0;

Dynamic File_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< File_obj > _hx_result = new File_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool File_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x645a6147;
}

::String File_obj::getContent(::String path){
            	HX_STACKFRAME(&_hx_pos_57691c97f4384ed7_30_getContent)
HXDLIN(  30)		return _hx_std_file_contents_string(path);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(File_obj,getContent,return )

 ::haxe::io::Bytes File_obj::getBytes(::String path){
            	HX_STACKFRAME(&_hx_pos_57691c97f4384ed7_33_getBytes)
HXLINE(  34)		::Array< unsigned char > data = _hx_std_file_contents_bytes(path);
HXLINE(  35)		return ::haxe::io::Bytes_obj::ofData(data);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(File_obj,getBytes,return )

void File_obj::saveBytes(::String path, ::haxe::io::Bytes bytes){
            	HX_STACKFRAME(&_hx_pos_57691c97f4384ed7_44_saveBytes)
HXLINE(  45)		 ::sys::io::FileOutput f = ::sys::io::File_obj::write(path,null());
HXLINE(  46)		f->write(bytes);
HXLINE(  47)		f->close();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(File_obj,saveBytes,(void))

 ::sys::io::FileInput File_obj::read(::String path,::hx::Null< bool >  __o_binary){
            		bool binary = __o_binary.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_57691c97f4384ed7_51_read)
HXDLIN(  51)		::String _hx_tmp;
HXDLIN(  51)		if (binary) {
HXDLIN(  51)			_hx_tmp = HX_("rb",b0,63,00,00);
            		}
            		else {
HXDLIN(  51)			_hx_tmp = HX_("r",72,00,00,00);
            		}
HXDLIN(  51)		return  ::sys::io::FileInput_obj::__alloc( HX_CTX ,_hx_std_file_open(path,_hx_tmp));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(File_obj,read,return )

 ::sys::io::FileOutput File_obj::write(::String path,::hx::Null< bool >  __o_binary){
            		bool binary = __o_binary.Default(true);
            	HX_GC_STACKFRAME(&_hx_pos_57691c97f4384ed7_55_write)
HXDLIN(  55)		::String _hx_tmp;
HXDLIN(  55)		if (binary) {
HXDLIN(  55)			_hx_tmp = HX_("wb",0b,68,00,00);
            		}
            		else {
HXDLIN(  55)			_hx_tmp = HX_("w",77,00,00,00);
            		}
HXDLIN(  55)		return  ::sys::io::FileOutput_obj::__alloc( HX_CTX ,_hx_std_file_open(path,_hx_tmp));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(File_obj,write,return )

void File_obj::copy(::String srcPath,::String dstPath){
            	HX_STACKFRAME(&_hx_pos_57691c97f4384ed7_69_copy)
HXLINE(  70)		 ::sys::io::FileInput s = ::sys::io::File_obj::read(srcPath,true);
HXLINE(  71)		 ::sys::io::FileOutput d = ::sys::io::File_obj::write(dstPath,true);
HXLINE(  72)		d->writeInput(s,null());
HXLINE(  73)		s->close();
HXLINE(  74)		d->close();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(File_obj,copy,(void))


File_obj::File_obj()
{
}

bool File_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"read") ) { outValue = read_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"copy") ) { outValue = copy_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"write") ) { outValue = write_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { outValue = getBytes_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"saveBytes") ) { outValue = saveBytes_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"getContent") ) { outValue = getContent_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *File_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *File_obj_sStaticStorageInfo = 0;
#endif

::hx::Class File_obj::__mClass;

static ::String File_obj_sStaticFields[] = {
	HX_("getContent",43,13,d9,68),
	HX_("getBytes",f5,17,6f,1d),
	HX_("saveBytes",ee,0f,45,4c),
	HX_("read",56,4b,a7,4b),
	HX_("write",df,6c,59,d0),
	HX_("copy",b5,bb,c4,41),
	::String(null())
};

void File_obj::__register()
{
	File_obj _hx_dummy;
	File_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("sys.io.File",c3,ef,8d,eb);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &File_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(File_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< File_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = File_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = File_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace sys
} // end namespace io
