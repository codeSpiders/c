package cn.hengyan.day40;

public class Generic<T> {
	private T key;
	public Generic(T key) {
		this.key=key;
	}
	public T getkey() {
		return key;
	}
}
