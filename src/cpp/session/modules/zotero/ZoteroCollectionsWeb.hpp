/*
 * ZoteroCollectionsWeb.hpp
 *
 * Copyright (C) 2022 by RStudio, PBC
 *
 * Unless you have received this program directly from RStudio pursuant
 * to the terms of a commercial license agreement with RStudio, then
 * this program is licensed to you under the terms of version 3 of the
 * GNU Affero General Public License. This program is distributed WITHOUT
 * ANY EXPRESS OR IMPLIED WARRANTY, INCLUDING THOSE OF NON-INFRINGEMENT,
 * MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE. Please refer to the
 * AGPL (http://www.gnu.org/licenses/agpl-3.0.txt) for more details.
 *
 */

#ifndef RSTUDIO_SESSION_MODULES_ZOTERO_COLLECTIONS_WEB_HPP
#define RSTUDIO_SESSION_MODULES_ZOTERO_COLLECTIONS_WEB_HPP

#include "ZoteroCollections.hpp"

namespace rstudio {
namespace session {
namespace modules {
namespace zotero {
namespace collections {

void validateWebApiKey(std::string key, boost::function<void(bool)> handler);

ZoteroCollectionSource webCollections();

} // end namespace collections
} // end namespace zotero
} // end namespace modules
} // end namespace session
} // end namespace rstudio

#endif /* RSTUDIO_SESSION_MODULES_ZOTERO_COLLECTIONS_WEB_HPP */
