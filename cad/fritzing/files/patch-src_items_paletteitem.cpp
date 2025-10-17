--- src/items/paletteitem.cpp.orig	2025-04-02 10:33:24 UTC
+++ src/items/paletteitem.cpp
@@ -51,6 +51,8 @@ along with Fritzing.  If not, see <http://www.gnu.org/
 #include <QRegularExpression>
 #include <QGroupBox>
 #include <QLabel>
+
+#include <cstdint>
 #include <limits>
 
 /////////////////////////////////////////////////
@@ -203,7 +205,7 @@ void PaletteItem::makeOneKin(qint64 & id, ViewLayer::V
 	if (lkpi->ok()) {
 //		DebugDialog::debug(QString("adding layer kin %1 %2 %3 %4")
 //		                   .arg(id).arg(m_viewID).arg(viewLayerID)
-//		                   .arg((long) lkpi, 0, 16)
+//		                   .arg(static_cast<long>(reinterpret_cast<std::uintptr_t>(lkpi)), 0, 16)
 //		                  );
 		addLayerKin(lkpi);
 		id++;
