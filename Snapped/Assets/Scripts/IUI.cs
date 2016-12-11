using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public interface IUI {

    void DisplayDismissableItem(string objName);

	void DisplayDismissableItem(string objName, AudioClip audioEnter, AudioClip audioExit);
}
