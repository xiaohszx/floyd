// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: raft/log_meta.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "log_meta.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace floyd {
namespace raft {
namespace log {

namespace {

const ::google::protobuf::Descriptor* MetaData_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MetaData_reflection_ = NULL;
const ::google::protobuf::Descriptor* FileLogMetaData_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  FileLogMetaData_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_raft_2flog_5fmeta_2eproto() {
  protobuf_AddDesc_raft_2flog_5fmeta_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "raft/log_meta.proto");
  GOOGLE_CHECK(file != NULL);
  MetaData_descriptor_ = file->message_type(0);
  static const int MetaData_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MetaData, current_term_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MetaData, voted_for_ip_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MetaData, voted_for_port_),
  };
  MetaData_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MetaData_descriptor_,
      MetaData::default_instance_,
      MetaData_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MetaData, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MetaData, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MetaData));
  FileLogMetaData_descriptor_ = file->message_type(1);
  static const int FileLogMetaData_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileLogMetaData, raft_metadata_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileLogMetaData, entries_start_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileLogMetaData, entries_end_),
  };
  FileLogMetaData_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      FileLogMetaData_descriptor_,
      FileLogMetaData::default_instance_,
      FileLogMetaData_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileLogMetaData, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(FileLogMetaData, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(FileLogMetaData));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_raft_2flog_5fmeta_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MetaData_descriptor_, &MetaData::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    FileLogMetaData_descriptor_, &FileLogMetaData::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_raft_2flog_5fmeta_2eproto() {
  delete MetaData::default_instance_;
  delete MetaData_reflection_;
  delete FileLogMetaData::default_instance_;
  delete FileLogMetaData_reflection_;
}

void protobuf_AddDesc_raft_2flog_5fmeta_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023raft/log_meta.proto\022\016floyd.raft.log\"N\n"
    "\010MetaData\022\024\n\014current_term\030\001 \002(\004\022\024\n\014voted"
    "_for_ip\030\002 \002(\014\022\026\n\016voted_for_port\030\003 \002(\005\"t\n"
    "\017FileLogMetaData\022/\n\rraft_metadata\030\001 \002(\0132"
    "\030.floyd.raft.log.MetaData\022\030\n\rentries_sta"
    "rt\030\002 \002(\004:\0011\022\026\n\013entries_end\030\003 \002(\004:\0010", 235);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "raft/log_meta.proto", &protobuf_RegisterTypes);
  MetaData::default_instance_ = new MetaData();
  FileLogMetaData::default_instance_ = new FileLogMetaData();
  MetaData::default_instance_->InitAsDefaultInstance();
  FileLogMetaData::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_raft_2flog_5fmeta_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_raft_2flog_5fmeta_2eproto {
  StaticDescriptorInitializer_raft_2flog_5fmeta_2eproto() {
    protobuf_AddDesc_raft_2flog_5fmeta_2eproto();
  }
} static_descriptor_initializer_raft_2flog_5fmeta_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int MetaData::kCurrentTermFieldNumber;
const int MetaData::kVotedForIpFieldNumber;
const int MetaData::kVotedForPortFieldNumber;
#endif  // !_MSC_VER

MetaData::MetaData()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void MetaData::InitAsDefaultInstance() {
}

MetaData::MetaData(const MetaData& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void MetaData::SharedCtor() {
  _cached_size_ = 0;
  current_term_ = GOOGLE_ULONGLONG(0);
  voted_for_ip_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  voted_for_port_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MetaData::~MetaData() {
  SharedDtor();
}

void MetaData::SharedDtor() {
  if (voted_for_ip_ != &::google::protobuf::internal::kEmptyString) {
    delete voted_for_ip_;
  }
  if (this != default_instance_) {
  }
}

void MetaData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MetaData::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MetaData_descriptor_;
}

const MetaData& MetaData::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_raft_2flog_5fmeta_2eproto();
  return *default_instance_;
}

MetaData* MetaData::default_instance_ = NULL;

MetaData* MetaData::New() const {
  return new MetaData;
}

void MetaData::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    current_term_ = GOOGLE_ULONGLONG(0);
    if (has_voted_for_ip()) {
      if (voted_for_ip_ != &::google::protobuf::internal::kEmptyString) {
        voted_for_ip_->clear();
      }
    }
    voted_for_port_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MetaData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint64 current_term = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &current_term_)));
          set_has_current_term();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(18)) goto parse_voted_for_ip;
        break;
      }

      // required bytes voted_for_ip = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_voted_for_ip:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_voted_for_ip()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_voted_for_port;
        break;
      }

      // required int32 voted_for_port = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_voted_for_port:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &voted_for_port_)));
          set_has_voted_for_port();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void MetaData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required uint64 current_term = 1;
  if (has_current_term()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->current_term(), output);
  }

  // required bytes voted_for_ip = 2;
  if (has_voted_for_ip()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytes(
      2, this->voted_for_ip(), output);
  }

  // required int32 voted_for_port = 3;
  if (has_voted_for_port()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->voted_for_port(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* MetaData::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required uint64 current_term = 1;
  if (has_current_term()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->current_term(), target);
  }

  // required bytes voted_for_ip = 2;
  if (has_voted_for_ip()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->voted_for_ip(), target);
  }

  // required int32 voted_for_port = 3;
  if (has_voted_for_port()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->voted_for_port(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int MetaData::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint64 current_term = 1;
    if (has_current_term()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->current_term());
    }

    // required bytes voted_for_ip = 2;
    if (has_voted_for_ip()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->voted_for_ip());
    }

    // required int32 voted_for_port = 3;
    if (has_voted_for_port()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->voted_for_port());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MetaData::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MetaData* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MetaData*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MetaData::MergeFrom(const MetaData& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_current_term()) {
      set_current_term(from.current_term());
    }
    if (from.has_voted_for_ip()) {
      set_voted_for_ip(from.voted_for_ip());
    }
    if (from.has_voted_for_port()) {
      set_voted_for_port(from.voted_for_port());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MetaData::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MetaData::CopyFrom(const MetaData& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MetaData::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void MetaData::Swap(MetaData* other) {
  if (other != this) {
    std::swap(current_term_, other->current_term_);
    std::swap(voted_for_ip_, other->voted_for_ip_);
    std::swap(voted_for_port_, other->voted_for_port_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MetaData::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MetaData_descriptor_;
  metadata.reflection = MetaData_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int FileLogMetaData::kRaftMetadataFieldNumber;
const int FileLogMetaData::kEntriesStartFieldNumber;
const int FileLogMetaData::kEntriesEndFieldNumber;
#endif  // !_MSC_VER

FileLogMetaData::FileLogMetaData()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void FileLogMetaData::InitAsDefaultInstance() {
  raft_metadata_ = const_cast< ::floyd::raft::log::MetaData*>(&::floyd::raft::log::MetaData::default_instance());
}

FileLogMetaData::FileLogMetaData(const FileLogMetaData& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void FileLogMetaData::SharedCtor() {
  _cached_size_ = 0;
  raft_metadata_ = NULL;
  entries_start_ = GOOGLE_ULONGLONG(1);
  entries_end_ = GOOGLE_ULONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

FileLogMetaData::~FileLogMetaData() {
  SharedDtor();
}

void FileLogMetaData::SharedDtor() {
  if (this != default_instance_) {
    delete raft_metadata_;
  }
}

void FileLogMetaData::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* FileLogMetaData::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return FileLogMetaData_descriptor_;
}

const FileLogMetaData& FileLogMetaData::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_raft_2flog_5fmeta_2eproto();
  return *default_instance_;
}

FileLogMetaData* FileLogMetaData::default_instance_ = NULL;

FileLogMetaData* FileLogMetaData::New() const {
  return new FileLogMetaData;
}

void FileLogMetaData::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_raft_metadata()) {
      if (raft_metadata_ != NULL) raft_metadata_->::floyd::raft::log::MetaData::Clear();
    }
    entries_start_ = GOOGLE_ULONGLONG(1);
    entries_end_ = GOOGLE_ULONGLONG(0);
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool FileLogMetaData::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .floyd.raft.log.MetaData raft_metadata = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_raft_metadata()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_entries_start;
        break;
      }

      // required uint64 entries_start = 2 [default = 1];
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_entries_start:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &entries_start_)));
          set_has_entries_start();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_entries_end;
        break;
      }

      // required uint64 entries_end = 3 [default = 0];
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_entries_end:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &entries_end_)));
          set_has_entries_end();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void FileLogMetaData::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .floyd.raft.log.MetaData raft_metadata = 1;
  if (has_raft_metadata()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->raft_metadata(), output);
  }

  // required uint64 entries_start = 2 [default = 1];
  if (has_entries_start()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->entries_start(), output);
  }

  // required uint64 entries_end = 3 [default = 0];
  if (has_entries_end()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(3, this->entries_end(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* FileLogMetaData::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .floyd.raft.log.MetaData raft_metadata = 1;
  if (has_raft_metadata()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->raft_metadata(), target);
  }

  // required uint64 entries_start = 2 [default = 1];
  if (has_entries_start()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(2, this->entries_start(), target);
  }

  // required uint64 entries_end = 3 [default = 0];
  if (has_entries_end()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(3, this->entries_end(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int FileLogMetaData::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .floyd.raft.log.MetaData raft_metadata = 1;
    if (has_raft_metadata()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->raft_metadata());
    }

    // required uint64 entries_start = 2 [default = 1];
    if (has_entries_start()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->entries_start());
    }

    // required uint64 entries_end = 3 [default = 0];
    if (has_entries_end()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->entries_end());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void FileLogMetaData::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const FileLogMetaData* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const FileLogMetaData*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void FileLogMetaData::MergeFrom(const FileLogMetaData& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_raft_metadata()) {
      mutable_raft_metadata()->::floyd::raft::log::MetaData::MergeFrom(from.raft_metadata());
    }
    if (from.has_entries_start()) {
      set_entries_start(from.entries_start());
    }
    if (from.has_entries_end()) {
      set_entries_end(from.entries_end());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void FileLogMetaData::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void FileLogMetaData::CopyFrom(const FileLogMetaData& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool FileLogMetaData::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  if (has_raft_metadata()) {
    if (!this->raft_metadata().IsInitialized()) return false;
  }
  return true;
}

void FileLogMetaData::Swap(FileLogMetaData* other) {
  if (other != this) {
    std::swap(raft_metadata_, other->raft_metadata_);
    std::swap(entries_start_, other->entries_start_);
    std::swap(entries_end_, other->entries_end_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata FileLogMetaData::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = FileLogMetaData_descriptor_;
  metadata.reflection = FileLogMetaData_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace log
}  // namespace raft
}  // namespace floyd

// @@protoc_insertion_point(global_scope)