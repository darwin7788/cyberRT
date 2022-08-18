// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cyber/proto/topology_change.proto

#include "cyber/proto/topology_change.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace apollo {
namespace cyber {
namespace proto {
PROTOBUF_CONSTEXPR ChangeMsg::ChangeMsg(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.role_attr_)*/nullptr
  , /*decltype(_impl_.timestamp_)*/uint64_t{0u}
  , /*decltype(_impl_.role_type_)*/1
  , /*decltype(_impl_.change_type_)*/1
  , /*decltype(_impl_.operate_type_)*/1} {}
struct ChangeMsgDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ChangeMsgDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ChangeMsgDefaultTypeInternal() {}
  union {
    ChangeMsg _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ChangeMsgDefaultTypeInternal _ChangeMsg_default_instance_;
}  // namespace proto
}  // namespace cyber
}  // namespace apollo
static ::_pb::Metadata file_level_metadata_cyber_2fproto_2ftopology_5fchange_2eproto[1];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_cyber_2fproto_2ftopology_5fchange_2eproto[3];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_cyber_2fproto_2ftopology_5fchange_2eproto = nullptr;

const uint32_t TableStruct_cyber_2fproto_2ftopology_5fchange_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::apollo::cyber::proto::ChangeMsg, _impl_._has_bits_),
  PROTOBUF_FIELD_OFFSET(::apollo::cyber::proto::ChangeMsg, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::apollo::cyber::proto::ChangeMsg, _impl_.timestamp_),
  PROTOBUF_FIELD_OFFSET(::apollo::cyber::proto::ChangeMsg, _impl_.change_type_),
  PROTOBUF_FIELD_OFFSET(::apollo::cyber::proto::ChangeMsg, _impl_.operate_type_),
  PROTOBUF_FIELD_OFFSET(::apollo::cyber::proto::ChangeMsg, _impl_.role_type_),
  PROTOBUF_FIELD_OFFSET(::apollo::cyber::proto::ChangeMsg, _impl_.role_attr_),
  1,
  3,
  4,
  2,
  0,
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 11, -1, sizeof(::apollo::cyber::proto::ChangeMsg)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::apollo::cyber::proto::_ChangeMsg_default_instance_._instance,
};

const char descriptor_table_protodef_cyber_2fproto_2ftopology_5fchange_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n!cyber/proto/topology_change.proto\022\022apo"
  "llo.cyber.proto\032!cyber/proto/role_attrib"
  "utes.proto\"\362\001\n\tChangeMsg\022\021\n\ttimestamp\030\001 "
  "\001(\004\0223\n\013change_type\030\002 \001(\0162\036.apollo.cyber."
  "proto.ChangeType\0225\n\014operate_type\030\003 \001(\0162\037"
  ".apollo.cyber.proto.OperateType\022/\n\trole_"
  "type\030\004 \001(\0162\034.apollo.cyber.proto.RoleType"
  "\0225\n\trole_attr\030\005 \001(\0132\".apollo.cyber.proto"
  ".RoleAttributes*]\n\nChangeType\022\017\n\013CHANGE_"
  "NODE\020\001\022\022\n\016CHANGE_CHANNEL\020\002\022\022\n\016CHANGE_SER"
  "VICE\020\003\022\026\n\022CHANGE_PARTICIPANT\020\004**\n\013Operat"
  "eType\022\014\n\010OPT_JOIN\020\001\022\r\n\tOPT_LEAVE\020\002*s\n\010Ro"
  "leType\022\r\n\tROLE_NODE\020\001\022\017\n\013ROLE_WRITER\020\002\022\017"
  "\n\013ROLE_READER\020\003\022\017\n\013ROLE_SERVER\020\004\022\017\n\013ROLE"
  "_CLIENT\020\005\022\024\n\020ROLE_PARTICIPANT\020\006"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_cyber_2fproto_2ftopology_5fchange_2eproto_deps[1] = {
  &::descriptor_table_cyber_2fproto_2frole_5fattributes_2eproto,
};
static ::_pbi::once_flag descriptor_table_cyber_2fproto_2ftopology_5fchange_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_cyber_2fproto_2ftopology_5fchange_2eproto = {
    false, false, 591, descriptor_table_protodef_cyber_2fproto_2ftopology_5fchange_2eproto,
    "cyber/proto/topology_change.proto",
    &descriptor_table_cyber_2fproto_2ftopology_5fchange_2eproto_once, descriptor_table_cyber_2fproto_2ftopology_5fchange_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_cyber_2fproto_2ftopology_5fchange_2eproto::offsets,
    file_level_metadata_cyber_2fproto_2ftopology_5fchange_2eproto, file_level_enum_descriptors_cyber_2fproto_2ftopology_5fchange_2eproto,
    file_level_service_descriptors_cyber_2fproto_2ftopology_5fchange_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_cyber_2fproto_2ftopology_5fchange_2eproto_getter() {
  return &descriptor_table_cyber_2fproto_2ftopology_5fchange_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_cyber_2fproto_2ftopology_5fchange_2eproto(&descriptor_table_cyber_2fproto_2ftopology_5fchange_2eproto);
namespace apollo {
namespace cyber {
namespace proto {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ChangeType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_cyber_2fproto_2ftopology_5fchange_2eproto);
  return file_level_enum_descriptors_cyber_2fproto_2ftopology_5fchange_2eproto[0];
}
bool ChangeType_IsValid(int value) {
  switch (value) {
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* OperateType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_cyber_2fproto_2ftopology_5fchange_2eproto);
  return file_level_enum_descriptors_cyber_2fproto_2ftopology_5fchange_2eproto[1];
}
bool OperateType_IsValid(int value) {
  switch (value) {
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* RoleType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_cyber_2fproto_2ftopology_5fchange_2eproto);
  return file_level_enum_descriptors_cyber_2fproto_2ftopology_5fchange_2eproto[2];
}
bool RoleType_IsValid(int value) {
  switch (value) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      return true;
    default:
      return false;
  }
}


// ===================================================================

class ChangeMsg::_Internal {
 public:
  using HasBits = decltype(std::declval<ChangeMsg>()._impl_._has_bits_);
  static void set_has_timestamp(HasBits* has_bits) {
    (*has_bits)[0] |= 2u;
  }
  static void set_has_change_type(HasBits* has_bits) {
    (*has_bits)[0] |= 8u;
  }
  static void set_has_operate_type(HasBits* has_bits) {
    (*has_bits)[0] |= 16u;
  }
  static void set_has_role_type(HasBits* has_bits) {
    (*has_bits)[0] |= 4u;
  }
  static const ::apollo::cyber::proto::RoleAttributes& role_attr(const ChangeMsg* msg);
  static void set_has_role_attr(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

const ::apollo::cyber::proto::RoleAttributes&
ChangeMsg::_Internal::role_attr(const ChangeMsg* msg) {
  return *msg->_impl_.role_attr_;
}
void ChangeMsg::clear_role_attr() {
  if (_impl_.role_attr_ != nullptr) _impl_.role_attr_->Clear();
  _impl_._has_bits_[0] &= ~0x00000001u;
}
ChangeMsg::ChangeMsg(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:apollo.cyber.proto.ChangeMsg)
}
ChangeMsg::ChangeMsg(const ChangeMsg& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  ChangeMsg* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.role_attr_){nullptr}
    , decltype(_impl_.timestamp_){}
    , decltype(_impl_.role_type_){}
    , decltype(_impl_.change_type_){}
    , decltype(_impl_.operate_type_){}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_role_attr()) {
    _this->_impl_.role_attr_ = new ::apollo::cyber::proto::RoleAttributes(*from._impl_.role_attr_);
  }
  ::memcpy(&_impl_.timestamp_, &from._impl_.timestamp_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.operate_type_) -
    reinterpret_cast<char*>(&_impl_.timestamp_)) + sizeof(_impl_.operate_type_));
  // @@protoc_insertion_point(copy_constructor:apollo.cyber.proto.ChangeMsg)
}

inline void ChangeMsg::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.role_attr_){nullptr}
    , decltype(_impl_.timestamp_){uint64_t{0u}}
    , decltype(_impl_.role_type_){1}
    , decltype(_impl_.change_type_){1}
    , decltype(_impl_.operate_type_){1}
  };
}

ChangeMsg::~ChangeMsg() {
  // @@protoc_insertion_point(destructor:apollo.cyber.proto.ChangeMsg)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ChangeMsg::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.role_attr_;
}

void ChangeMsg::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ChangeMsg::Clear() {
// @@protoc_insertion_point(message_clear_start:apollo.cyber.proto.ChangeMsg)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    GOOGLE_DCHECK(_impl_.role_attr_ != nullptr);
    _impl_.role_attr_->Clear();
  }
  if (cached_has_bits & 0x0000001eu) {
    _impl_.timestamp_ = uint64_t{0u};
    _impl_.role_type_ = 1;
    _impl_.change_type_ = 1;
    _impl_.operate_type_ = 1;
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ChangeMsg::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional uint64 timestamp = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _Internal::set_has_timestamp(&has_bits);
          _impl_.timestamp_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // optional .apollo.cyber.proto.ChangeType change_type = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::apollo::cyber::proto::ChangeType_IsValid(val))) {
            _internal_set_change_type(static_cast<::apollo::cyber::proto::ChangeType>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(2, val, mutable_unknown_fields());
          }
        } else
          goto handle_unusual;
        continue;
      // optional .apollo.cyber.proto.OperateType operate_type = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::apollo::cyber::proto::OperateType_IsValid(val))) {
            _internal_set_operate_type(static_cast<::apollo::cyber::proto::OperateType>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(3, val, mutable_unknown_fields());
          }
        } else
          goto handle_unusual;
        continue;
      // optional .apollo.cyber.proto.RoleType role_type = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          if (PROTOBUF_PREDICT_TRUE(::apollo::cyber::proto::RoleType_IsValid(val))) {
            _internal_set_role_type(static_cast<::apollo::cyber::proto::RoleType>(val));
          } else {
            ::PROTOBUF_NAMESPACE_ID::internal::WriteVarint(4, val, mutable_unknown_fields());
          }
        } else
          goto handle_unusual;
        continue;
      // optional .apollo.cyber.proto.RoleAttributes role_attr = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          ptr = ctx->ParseMessage(_internal_mutable_role_attr(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* ChangeMsg::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:apollo.cyber.proto.ChangeMsg)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional uint64 timestamp = 1;
  if (cached_has_bits & 0x00000002u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt64ToArray(1, this->_internal_timestamp(), target);
  }

  // optional .apollo.cyber.proto.ChangeType change_type = 2;
  if (cached_has_bits & 0x00000008u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      2, this->_internal_change_type(), target);
  }

  // optional .apollo.cyber.proto.OperateType operate_type = 3;
  if (cached_has_bits & 0x00000010u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      3, this->_internal_operate_type(), target);
  }

  // optional .apollo.cyber.proto.RoleType role_type = 4;
  if (cached_has_bits & 0x00000004u) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      4, this->_internal_role_type(), target);
  }

  // optional .apollo.cyber.proto.RoleAttributes role_attr = 5;
  if (cached_has_bits & 0x00000001u) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(5, _Internal::role_attr(this),
        _Internal::role_attr(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:apollo.cyber.proto.ChangeMsg)
  return target;
}

size_t ChangeMsg::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:apollo.cyber.proto.ChangeMsg)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    // optional .apollo.cyber.proto.RoleAttributes role_attr = 5;
    if (cached_has_bits & 0x00000001u) {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.role_attr_);
    }

    // optional uint64 timestamp = 1;
    if (cached_has_bits & 0x00000002u) {
      total_size += ::_pbi::WireFormatLite::UInt64SizePlusOne(this->_internal_timestamp());
    }

    // optional .apollo.cyber.proto.RoleType role_type = 4;
    if (cached_has_bits & 0x00000004u) {
      total_size += 1 +
        ::_pbi::WireFormatLite::EnumSize(this->_internal_role_type());
    }

    // optional .apollo.cyber.proto.ChangeType change_type = 2;
    if (cached_has_bits & 0x00000008u) {
      total_size += 1 +
        ::_pbi::WireFormatLite::EnumSize(this->_internal_change_type());
    }

    // optional .apollo.cyber.proto.OperateType operate_type = 3;
    if (cached_has_bits & 0x00000010u) {
      total_size += 1 +
        ::_pbi::WireFormatLite::EnumSize(this->_internal_operate_type());
    }

  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ChangeMsg::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ChangeMsg::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ChangeMsg::GetClassData() const { return &_class_data_; }


void ChangeMsg::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<ChangeMsg*>(&to_msg);
  auto& from = static_cast<const ChangeMsg&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:apollo.cyber.proto.ChangeMsg)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._impl_._has_bits_[0];
  if (cached_has_bits & 0x0000001fu) {
    if (cached_has_bits & 0x00000001u) {
      _this->_internal_mutable_role_attr()->::apollo::cyber::proto::RoleAttributes::MergeFrom(
          from._internal_role_attr());
    }
    if (cached_has_bits & 0x00000002u) {
      _this->_impl_.timestamp_ = from._impl_.timestamp_;
    }
    if (cached_has_bits & 0x00000004u) {
      _this->_impl_.role_type_ = from._impl_.role_type_;
    }
    if (cached_has_bits & 0x00000008u) {
      _this->_impl_.change_type_ = from._impl_.change_type_;
    }
    if (cached_has_bits & 0x00000010u) {
      _this->_impl_.operate_type_ = from._impl_.operate_type_;
    }
    _this->_impl_._has_bits_[0] |= cached_has_bits;
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ChangeMsg::CopyFrom(const ChangeMsg& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:apollo.cyber.proto.ChangeMsg)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ChangeMsg::IsInitialized() const {
  return true;
}

void ChangeMsg::InternalSwap(ChangeMsg* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ChangeMsg, _impl_.timestamp_)
      + sizeof(ChangeMsg::_impl_.timestamp_)
      - PROTOBUF_FIELD_OFFSET(ChangeMsg, _impl_.role_attr_)>(
          reinterpret_cast<char*>(&_impl_.role_attr_),
          reinterpret_cast<char*>(&other->_impl_.role_attr_));
  swap(_impl_.role_type_, other->_impl_.role_type_);
  swap(_impl_.change_type_, other->_impl_.change_type_);
  swap(_impl_.operate_type_, other->_impl_.operate_type_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ChangeMsg::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_cyber_2fproto_2ftopology_5fchange_2eproto_getter, &descriptor_table_cyber_2fproto_2ftopology_5fchange_2eproto_once,
      file_level_metadata_cyber_2fproto_2ftopology_5fchange_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace cyber
}  // namespace apollo
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::apollo::cyber::proto::ChangeMsg*
Arena::CreateMaybeMessage< ::apollo::cyber::proto::ChangeMsg >(Arena* arena) {
  return Arena::CreateMessageInternal< ::apollo::cyber::proto::ChangeMsg >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
