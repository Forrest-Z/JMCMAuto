// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: modules/drivers/lidar_velodyne/tools/proto/velodyne_tools_conf.proto

#ifndef PROTOBUF_modules_2fdrivers_2flidar_5fvelodyne_2ftools_2fproto_2fvelodyne_5ftools_5fconf_2eproto__INCLUDED
#define PROTOBUF_modules_2fdrivers_2flidar_5fvelodyne_2ftools_2fproto_2fvelodyne_5ftools_5fconf_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3003000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3003000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "modules/drivers/lidar_velodyne/proto/velodyne_conf.pb.h"
// @@protoc_insertion_point(includes)
namespace jmc_auto {
namespace drivers {
namespace lidar_velodyne {
class FusionConf;
class FusionConfDefaultTypeInternal;
extern FusionConfDefaultTypeInternal _FusionConf_default_instance_;
class VelodyneConf;
class VelodyneConfDefaultTypeInternal;
extern VelodyneConfDefaultTypeInternal _VelodyneConf_default_instance_;
class VelodyneConfUnit;
class VelodyneConfUnitDefaultTypeInternal;
extern VelodyneConfUnitDefaultTypeInternal _VelodyneConfUnit_default_instance_;
class VelodyneToolsConf;
class VelodyneToolsConfDefaultTypeInternal;
extern VelodyneToolsConfDefaultTypeInternal _VelodyneToolsConf_default_instance_;
}  // namespace lidar_velodyne
}  // namespace drivers
}  // namespace jmc_auto

namespace jmc_auto {
namespace drivers {
namespace lidar_velodyne {

namespace protobuf_modules_2fdrivers_2flidar_5fvelodyne_2ftools_2fproto_2fvelodyne_5ftools_5fconf_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[];
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_modules_2fdrivers_2flidar_5fvelodyne_2ftools_2fproto_2fvelodyne_5ftools_5fconf_2eproto

// ===================================================================

class VelodyneToolsConf : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf) */ {
 public:
  VelodyneToolsConf();
  virtual ~VelodyneToolsConf();

  VelodyneToolsConf(const VelodyneToolsConf& from);

  inline VelodyneToolsConf& operator=(const VelodyneToolsConf& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const VelodyneToolsConf& default_instance();

  static inline const VelodyneToolsConf* internal_default_instance() {
    return reinterpret_cast<const VelodyneToolsConf*>(
               &_VelodyneToolsConf_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(VelodyneToolsConf* other);

  // implements Message ----------------------------------------------

  inline VelodyneToolsConf* New() const PROTOBUF_FINAL { return New(NULL); }

  VelodyneToolsConf* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const VelodyneToolsConf& from);
  void MergeFrom(const VelodyneToolsConf& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(VelodyneToolsConf* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string pcd_folder = 1;
  bool has_pcd_folder() const;
  void clear_pcd_folder();
  static const int kPcdFolderFieldNumber = 1;
  const ::std::string& pcd_folder() const;
  void set_pcd_folder(const ::std::string& value);
  #if LANG_CXX11
  void set_pcd_folder(::std::string&& value);
  #endif
  void set_pcd_folder(const char* value);
  void set_pcd_folder(const char* value, size_t size);
  ::std::string* mutable_pcd_folder();
  ::std::string* release_pcd_folder();
  void set_allocated_pcd_folder(::std::string* pcd_folder);

  // optional string stamp_file = 2;
  bool has_stamp_file() const;
  void clear_stamp_file();
  static const int kStampFileFieldNumber = 2;
  const ::std::string& stamp_file() const;
  void set_stamp_file(const ::std::string& value);
  #if LANG_CXX11
  void set_stamp_file(::std::string&& value);
  #endif
  void set_stamp_file(const char* value);
  void set_stamp_file(const char* value, size_t size);
  ::std::string* mutable_stamp_file();
  ::std::string* release_stamp_file();
  void set_allocated_stamp_file(::std::string* stamp_file);

  // optional string pose_file = 3;
  bool has_pose_file() const;
  void clear_pose_file();
  static const int kPoseFileFieldNumber = 3;
  const ::std::string& pose_file() const;
  void set_pose_file(const ::std::string& value);
  #if LANG_CXX11
  void set_pose_file(::std::string&& value);
  #endif
  void set_pose_file(const char* value);
  void set_pose_file(const char* value, size_t size);
  ::std::string* mutable_pose_file();
  ::std::string* release_pose_file();
  void set_allocated_pose_file(::std::string* pose_file);

  // optional string child_frame_id = 5 [default = "velodyne"];
  bool has_child_frame_id() const;
  void clear_child_frame_id();
  static const int kChildFrameIdFieldNumber = 5;
  const ::std::string& child_frame_id() const;
  void set_child_frame_id(const ::std::string& value);
  #if LANG_CXX11
  void set_child_frame_id(::std::string&& value);
  #endif
  void set_child_frame_id(const char* value);
  void set_child_frame_id(const char* value, size_t size);
  ::std::string* mutable_child_frame_id();
  ::std::string* release_child_frame_id();
  void set_allocated_child_frame_id(::std::string* child_frame_id);

  // optional string save_folder = 7;
  bool has_save_folder() const;
  void clear_save_folder();
  static const int kSaveFolderFieldNumber = 7;
  const ::std::string& save_folder() const;
  void set_save_folder(const ::std::string& value);
  #if LANG_CXX11
  void set_save_folder(::std::string&& value);
  #endif
  void set_save_folder(const char* value);
  void set_save_folder(const char* value, size_t size);
  ::std::string* mutable_save_folder();
  ::std::string* release_save_folder();
  void set_allocated_save_folder(::std::string* save_folder);

  // optional string file_prefix = 8;
  bool has_file_prefix() const;
  void clear_file_prefix();
  static const int kFilePrefixFieldNumber = 8;
  const ::std::string& file_prefix() const;
  void set_file_prefix(const ::std::string& value);
  #if LANG_CXX11
  void set_file_prefix(::std::string&& value);
  #endif
  void set_file_prefix(const char* value);
  void set_file_prefix(const char* value, size_t size);
  ::std::string* mutable_file_prefix();
  ::std::string* release_file_prefix();
  void set_allocated_file_prefix(::std::string* file_prefix);

  // optional .jmc_auto.drivers.lidar_velodyne.VelodyneConf module_conf = 101;
  bool has_module_conf() const;
  void clear_module_conf();
  static const int kModuleConfFieldNumber = 101;
  const ::jmc_auto::drivers::lidar_velodyne::VelodyneConf& module_conf() const;
  ::jmc_auto::drivers::lidar_velodyne::VelodyneConf* mutable_module_conf();
  ::jmc_auto::drivers::lidar_velodyne::VelodyneConf* release_module_conf();
  void set_allocated_module_conf(::jmc_auto::drivers::lidar_velodyne::VelodyneConf* module_conf);

  // optional bool skip_static_frames = 4 [default = false];
  bool has_skip_static_frames() const;
  void clear_skip_static_frames();
  static const int kSkipStaticFramesFieldNumber = 4;
  bool skip_static_frames() const;
  void set_skip_static_frames(bool value);

  // optional bool use_seq = 6 [default = false];
  bool has_use_seq() const;
  void clear_use_seq();
  static const int kUseSeqFieldNumber = 6;
  bool use_seq() const;
  void set_use_seq(bool value);

  // @@protoc_insertion_point(class_scope:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf)
 private:
  void set_has_pcd_folder();
  void clear_has_pcd_folder();
  void set_has_stamp_file();
  void clear_has_stamp_file();
  void set_has_pose_file();
  void clear_has_pose_file();
  void set_has_skip_static_frames();
  void clear_has_skip_static_frames();
  void set_has_child_frame_id();
  void clear_has_child_frame_id();
  void set_has_use_seq();
  void clear_has_use_seq();
  void set_has_save_folder();
  void clear_has_save_folder();
  void set_has_file_prefix();
  void clear_has_file_prefix();
  void set_has_module_conf();
  void clear_has_module_conf();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr pcd_folder_;
  ::google::protobuf::internal::ArenaStringPtr stamp_file_;
  ::google::protobuf::internal::ArenaStringPtr pose_file_;
  static ::google::protobuf::internal::ExplicitlyConstructed< ::std::string> _default_child_frame_id_;
  ::google::protobuf::internal::ArenaStringPtr child_frame_id_;
  ::google::protobuf::internal::ArenaStringPtr save_folder_;
  ::google::protobuf::internal::ArenaStringPtr file_prefix_;
  ::jmc_auto::drivers::lidar_velodyne::VelodyneConf* module_conf_;
  bool skip_static_frames_;
  bool use_seq_;
  friend struct protobuf_modules_2fdrivers_2flidar_5fvelodyne_2ftools_2fproto_2fvelodyne_5ftools_5fconf_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// VelodyneToolsConf

// optional string pcd_folder = 1;
inline bool VelodyneToolsConf::has_pcd_folder() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void VelodyneToolsConf::set_has_pcd_folder() {
  _has_bits_[0] |= 0x00000001u;
}
inline void VelodyneToolsConf::clear_has_pcd_folder() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void VelodyneToolsConf::clear_pcd_folder() {
  pcd_folder_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_pcd_folder();
}
inline const ::std::string& VelodyneToolsConf::pcd_folder() const {
  // @@protoc_insertion_point(field_get:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.pcd_folder)
  return pcd_folder_.GetNoArena();
}
inline void VelodyneToolsConf::set_pcd_folder(const ::std::string& value) {
  set_has_pcd_folder();
  pcd_folder_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.pcd_folder)
}
#if LANG_CXX11
inline void VelodyneToolsConf::set_pcd_folder(::std::string&& value) {
  set_has_pcd_folder();
  pcd_folder_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.pcd_folder)
}
#endif
inline void VelodyneToolsConf::set_pcd_folder(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_pcd_folder();
  pcd_folder_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.pcd_folder)
}
inline void VelodyneToolsConf::set_pcd_folder(const char* value, size_t size) {
  set_has_pcd_folder();
  pcd_folder_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.pcd_folder)
}
inline ::std::string* VelodyneToolsConf::mutable_pcd_folder() {
  set_has_pcd_folder();
  // @@protoc_insertion_point(field_mutable:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.pcd_folder)
  return pcd_folder_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* VelodyneToolsConf::release_pcd_folder() {
  // @@protoc_insertion_point(field_release:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.pcd_folder)
  clear_has_pcd_folder();
  return pcd_folder_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void VelodyneToolsConf::set_allocated_pcd_folder(::std::string* pcd_folder) {
  if (pcd_folder != NULL) {
    set_has_pcd_folder();
  } else {
    clear_has_pcd_folder();
  }
  pcd_folder_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), pcd_folder);
  // @@protoc_insertion_point(field_set_allocated:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.pcd_folder)
}

// optional string stamp_file = 2;
inline bool VelodyneToolsConf::has_stamp_file() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void VelodyneToolsConf::set_has_stamp_file() {
  _has_bits_[0] |= 0x00000002u;
}
inline void VelodyneToolsConf::clear_has_stamp_file() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void VelodyneToolsConf::clear_stamp_file() {
  stamp_file_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_stamp_file();
}
inline const ::std::string& VelodyneToolsConf::stamp_file() const {
  // @@protoc_insertion_point(field_get:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.stamp_file)
  return stamp_file_.GetNoArena();
}
inline void VelodyneToolsConf::set_stamp_file(const ::std::string& value) {
  set_has_stamp_file();
  stamp_file_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.stamp_file)
}
#if LANG_CXX11
inline void VelodyneToolsConf::set_stamp_file(::std::string&& value) {
  set_has_stamp_file();
  stamp_file_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.stamp_file)
}
#endif
inline void VelodyneToolsConf::set_stamp_file(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_stamp_file();
  stamp_file_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.stamp_file)
}
inline void VelodyneToolsConf::set_stamp_file(const char* value, size_t size) {
  set_has_stamp_file();
  stamp_file_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.stamp_file)
}
inline ::std::string* VelodyneToolsConf::mutable_stamp_file() {
  set_has_stamp_file();
  // @@protoc_insertion_point(field_mutable:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.stamp_file)
  return stamp_file_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* VelodyneToolsConf::release_stamp_file() {
  // @@protoc_insertion_point(field_release:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.stamp_file)
  clear_has_stamp_file();
  return stamp_file_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void VelodyneToolsConf::set_allocated_stamp_file(::std::string* stamp_file) {
  if (stamp_file != NULL) {
    set_has_stamp_file();
  } else {
    clear_has_stamp_file();
  }
  stamp_file_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), stamp_file);
  // @@protoc_insertion_point(field_set_allocated:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.stamp_file)
}

// optional string pose_file = 3;
inline bool VelodyneToolsConf::has_pose_file() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void VelodyneToolsConf::set_has_pose_file() {
  _has_bits_[0] |= 0x00000004u;
}
inline void VelodyneToolsConf::clear_has_pose_file() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void VelodyneToolsConf::clear_pose_file() {
  pose_file_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_pose_file();
}
inline const ::std::string& VelodyneToolsConf::pose_file() const {
  // @@protoc_insertion_point(field_get:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.pose_file)
  return pose_file_.GetNoArena();
}
inline void VelodyneToolsConf::set_pose_file(const ::std::string& value) {
  set_has_pose_file();
  pose_file_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.pose_file)
}
#if LANG_CXX11
inline void VelodyneToolsConf::set_pose_file(::std::string&& value) {
  set_has_pose_file();
  pose_file_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.pose_file)
}
#endif
inline void VelodyneToolsConf::set_pose_file(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_pose_file();
  pose_file_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.pose_file)
}
inline void VelodyneToolsConf::set_pose_file(const char* value, size_t size) {
  set_has_pose_file();
  pose_file_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.pose_file)
}
inline ::std::string* VelodyneToolsConf::mutable_pose_file() {
  set_has_pose_file();
  // @@protoc_insertion_point(field_mutable:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.pose_file)
  return pose_file_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* VelodyneToolsConf::release_pose_file() {
  // @@protoc_insertion_point(field_release:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.pose_file)
  clear_has_pose_file();
  return pose_file_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void VelodyneToolsConf::set_allocated_pose_file(::std::string* pose_file) {
  if (pose_file != NULL) {
    set_has_pose_file();
  } else {
    clear_has_pose_file();
  }
  pose_file_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), pose_file);
  // @@protoc_insertion_point(field_set_allocated:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.pose_file)
}

// optional bool skip_static_frames = 4 [default = false];
inline bool VelodyneToolsConf::has_skip_static_frames() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void VelodyneToolsConf::set_has_skip_static_frames() {
  _has_bits_[0] |= 0x00000080u;
}
inline void VelodyneToolsConf::clear_has_skip_static_frames() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void VelodyneToolsConf::clear_skip_static_frames() {
  skip_static_frames_ = false;
  clear_has_skip_static_frames();
}
inline bool VelodyneToolsConf::skip_static_frames() const {
  // @@protoc_insertion_point(field_get:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.skip_static_frames)
  return skip_static_frames_;
}
inline void VelodyneToolsConf::set_skip_static_frames(bool value) {
  set_has_skip_static_frames();
  skip_static_frames_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.skip_static_frames)
}

// optional string child_frame_id = 5 [default = "velodyne"];
inline bool VelodyneToolsConf::has_child_frame_id() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void VelodyneToolsConf::set_has_child_frame_id() {
  _has_bits_[0] |= 0x00000008u;
}
inline void VelodyneToolsConf::clear_has_child_frame_id() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void VelodyneToolsConf::clear_child_frame_id() {
  child_frame_id_.ClearToDefaultNoArena(&VelodyneToolsConf::_default_child_frame_id_.get());
  clear_has_child_frame_id();
}
inline const ::std::string& VelodyneToolsConf::child_frame_id() const {
  // @@protoc_insertion_point(field_get:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.child_frame_id)
  return child_frame_id_.GetNoArena();
}
inline void VelodyneToolsConf::set_child_frame_id(const ::std::string& value) {
  set_has_child_frame_id();
  child_frame_id_.SetNoArena(&VelodyneToolsConf::_default_child_frame_id_.get(), value);
  // @@protoc_insertion_point(field_set:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.child_frame_id)
}
#if LANG_CXX11
inline void VelodyneToolsConf::set_child_frame_id(::std::string&& value) {
  set_has_child_frame_id();
  child_frame_id_.SetNoArena(
    &VelodyneToolsConf::_default_child_frame_id_.get(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.child_frame_id)
}
#endif
inline void VelodyneToolsConf::set_child_frame_id(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_child_frame_id();
  child_frame_id_.SetNoArena(&VelodyneToolsConf::_default_child_frame_id_.get(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.child_frame_id)
}
inline void VelodyneToolsConf::set_child_frame_id(const char* value, size_t size) {
  set_has_child_frame_id();
  child_frame_id_.SetNoArena(&VelodyneToolsConf::_default_child_frame_id_.get(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.child_frame_id)
}
inline ::std::string* VelodyneToolsConf::mutable_child_frame_id() {
  set_has_child_frame_id();
  // @@protoc_insertion_point(field_mutable:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.child_frame_id)
  return child_frame_id_.MutableNoArena(&VelodyneToolsConf::_default_child_frame_id_.get());
}
inline ::std::string* VelodyneToolsConf::release_child_frame_id() {
  // @@protoc_insertion_point(field_release:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.child_frame_id)
  clear_has_child_frame_id();
  return child_frame_id_.ReleaseNoArena(&VelodyneToolsConf::_default_child_frame_id_.get());
}
inline void VelodyneToolsConf::set_allocated_child_frame_id(::std::string* child_frame_id) {
  if (child_frame_id != NULL) {
    set_has_child_frame_id();
  } else {
    clear_has_child_frame_id();
  }
  child_frame_id_.SetAllocatedNoArena(&VelodyneToolsConf::_default_child_frame_id_.get(), child_frame_id);
  // @@protoc_insertion_point(field_set_allocated:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.child_frame_id)
}

// optional bool use_seq = 6 [default = false];
inline bool VelodyneToolsConf::has_use_seq() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void VelodyneToolsConf::set_has_use_seq() {
  _has_bits_[0] |= 0x00000100u;
}
inline void VelodyneToolsConf::clear_has_use_seq() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void VelodyneToolsConf::clear_use_seq() {
  use_seq_ = false;
  clear_has_use_seq();
}
inline bool VelodyneToolsConf::use_seq() const {
  // @@protoc_insertion_point(field_get:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.use_seq)
  return use_seq_;
}
inline void VelodyneToolsConf::set_use_seq(bool value) {
  set_has_use_seq();
  use_seq_ = value;
  // @@protoc_insertion_point(field_set:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.use_seq)
}

// optional string save_folder = 7;
inline bool VelodyneToolsConf::has_save_folder() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void VelodyneToolsConf::set_has_save_folder() {
  _has_bits_[0] |= 0x00000010u;
}
inline void VelodyneToolsConf::clear_has_save_folder() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void VelodyneToolsConf::clear_save_folder() {
  save_folder_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_save_folder();
}
inline const ::std::string& VelodyneToolsConf::save_folder() const {
  // @@protoc_insertion_point(field_get:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.save_folder)
  return save_folder_.GetNoArena();
}
inline void VelodyneToolsConf::set_save_folder(const ::std::string& value) {
  set_has_save_folder();
  save_folder_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.save_folder)
}
#if LANG_CXX11
inline void VelodyneToolsConf::set_save_folder(::std::string&& value) {
  set_has_save_folder();
  save_folder_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.save_folder)
}
#endif
inline void VelodyneToolsConf::set_save_folder(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_save_folder();
  save_folder_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.save_folder)
}
inline void VelodyneToolsConf::set_save_folder(const char* value, size_t size) {
  set_has_save_folder();
  save_folder_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.save_folder)
}
inline ::std::string* VelodyneToolsConf::mutable_save_folder() {
  set_has_save_folder();
  // @@protoc_insertion_point(field_mutable:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.save_folder)
  return save_folder_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* VelodyneToolsConf::release_save_folder() {
  // @@protoc_insertion_point(field_release:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.save_folder)
  clear_has_save_folder();
  return save_folder_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void VelodyneToolsConf::set_allocated_save_folder(::std::string* save_folder) {
  if (save_folder != NULL) {
    set_has_save_folder();
  } else {
    clear_has_save_folder();
  }
  save_folder_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), save_folder);
  // @@protoc_insertion_point(field_set_allocated:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.save_folder)
}

// optional string file_prefix = 8;
inline bool VelodyneToolsConf::has_file_prefix() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void VelodyneToolsConf::set_has_file_prefix() {
  _has_bits_[0] |= 0x00000020u;
}
inline void VelodyneToolsConf::clear_has_file_prefix() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void VelodyneToolsConf::clear_file_prefix() {
  file_prefix_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_file_prefix();
}
inline const ::std::string& VelodyneToolsConf::file_prefix() const {
  // @@protoc_insertion_point(field_get:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.file_prefix)
  return file_prefix_.GetNoArena();
}
inline void VelodyneToolsConf::set_file_prefix(const ::std::string& value) {
  set_has_file_prefix();
  file_prefix_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.file_prefix)
}
#if LANG_CXX11
inline void VelodyneToolsConf::set_file_prefix(::std::string&& value) {
  set_has_file_prefix();
  file_prefix_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.file_prefix)
}
#endif
inline void VelodyneToolsConf::set_file_prefix(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_file_prefix();
  file_prefix_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.file_prefix)
}
inline void VelodyneToolsConf::set_file_prefix(const char* value, size_t size) {
  set_has_file_prefix();
  file_prefix_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.file_prefix)
}
inline ::std::string* VelodyneToolsConf::mutable_file_prefix() {
  set_has_file_prefix();
  // @@protoc_insertion_point(field_mutable:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.file_prefix)
  return file_prefix_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* VelodyneToolsConf::release_file_prefix() {
  // @@protoc_insertion_point(field_release:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.file_prefix)
  clear_has_file_prefix();
  return file_prefix_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void VelodyneToolsConf::set_allocated_file_prefix(::std::string* file_prefix) {
  if (file_prefix != NULL) {
    set_has_file_prefix();
  } else {
    clear_has_file_prefix();
  }
  file_prefix_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), file_prefix);
  // @@protoc_insertion_point(field_set_allocated:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.file_prefix)
}

// optional .jmc_auto.drivers.lidar_velodyne.VelodyneConf module_conf = 101;
inline bool VelodyneToolsConf::has_module_conf() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void VelodyneToolsConf::set_has_module_conf() {
  _has_bits_[0] |= 0x00000040u;
}
inline void VelodyneToolsConf::clear_has_module_conf() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void VelodyneToolsConf::clear_module_conf() {
  if (module_conf_ != NULL) module_conf_->::jmc_auto::drivers::lidar_velodyne::VelodyneConf::Clear();
  clear_has_module_conf();
}
inline const ::jmc_auto::drivers::lidar_velodyne::VelodyneConf& VelodyneToolsConf::module_conf() const {
  // @@protoc_insertion_point(field_get:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.module_conf)
  return module_conf_ != NULL ? *module_conf_
                         : *::jmc_auto::drivers::lidar_velodyne::VelodyneConf::internal_default_instance();
}
inline ::jmc_auto::drivers::lidar_velodyne::VelodyneConf* VelodyneToolsConf::mutable_module_conf() {
  set_has_module_conf();
  if (module_conf_ == NULL) {
    module_conf_ = new ::jmc_auto::drivers::lidar_velodyne::VelodyneConf;
  }
  // @@protoc_insertion_point(field_mutable:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.module_conf)
  return module_conf_;
}
inline ::jmc_auto::drivers::lidar_velodyne::VelodyneConf* VelodyneToolsConf::release_module_conf() {
  // @@protoc_insertion_point(field_release:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.module_conf)
  clear_has_module_conf();
  ::jmc_auto::drivers::lidar_velodyne::VelodyneConf* temp = module_conf_;
  module_conf_ = NULL;
  return temp;
}
inline void VelodyneToolsConf::set_allocated_module_conf(::jmc_auto::drivers::lidar_velodyne::VelodyneConf* module_conf) {
  delete module_conf_;
  module_conf_ = module_conf;
  if (module_conf) {
    set_has_module_conf();
  } else {
    clear_has_module_conf();
  }
  // @@protoc_insertion_point(field_set_allocated:jmc_auto.drivers.lidar_velodyne.VelodyneToolsConf.module_conf)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace lidar_velodyne
}  // namespace drivers
}  // namespace jmc_auto

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_modules_2fdrivers_2flidar_5fvelodyne_2ftools_2fproto_2fvelodyne_5ftools_5fconf_2eproto__INCLUDED
