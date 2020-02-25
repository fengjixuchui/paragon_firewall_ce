// Paragon Firewall Community Edition
// Copyright (C) 2019-2020  Paragon Software GmbH
//
// This file is part of Paragon Firewall Community Edition.
//
// Paragon Firewall Community Edition is free software: you can
// redistribute it and/or modify it under the terms of the GNU General
// Public License as published by the Free Software Foundation, either
// version 3 of the License, or (at your option) any later version.
//
// Paragon Firewall Community Edition is distributed in the hope that it
// will be useful, but WITHOUT ANY WARRANTY; without even the implied
// warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See
// the GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with Paragon Firewall Community Edition. If not, see
//   <https://www.gnu.org/licenses/>.

#pragma once

#include <optional>
#include <string>

namespace mcom {

class DiskName {
 public:
  static std::optional<DiskName> FromString(const std::string &str);

  std::string ToString() const;

  int Major() const;

  std::optional<int> Minor() const;

  explicit DiskName(int major, const std::optional<int> &minor);

 private:
  DiskName(int major, int minor) : major_{major}, minor_{minor} {}

  int major_;
  int minor_;
};

}  // namespace mcom
